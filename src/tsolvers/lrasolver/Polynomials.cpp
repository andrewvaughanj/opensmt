//
//
//

#include "LARefs.h"
#include "Polynomials.h"
#include "BindedRows.h"

void Poly::remove(LVRef v)
{
    int start_idx = varToIdx[v]+1;
    for (int i = start_idx; i < size(); i++) {
        terms[i-1] = terms[i];
    }
    vec<Map<LVRef,int,LVRefHash>::Pair*> ptrs;
    varToIdx.getKeysAndValsPtrs(ptrs);
    for (int i = 0; i < ptrs.size(); i++)
        if (ptrs[i]->data >= start_idx) ptrs[i]->data--;
    varToIdx.remove(v);
    sz --;
}

void
PolyStore::remove(LVRef v, PolyRef pol)
{
    Poly& p = pa[pol];
    p.remove(v);
}

void
PolyStore::remove(LVRef poly_var)
{
    PolyRef pr = lva[poly_var].getPolyRef();
    for (int i = 0; i < pa[pr].size(); i++) {
        // Remove the PolyTermRef
        PolyTermRef ptr = pa[pr][i];
        pta.free(ptr);
    }
    pa.free(pr);
}

int
PolyStore::add(LVRef poly_var, LVRef v, Real &c) {
    assert(!lva[v].isBasic());
    int pos;
    if (getPoly(poly_var).has(v)) {
        pos = getPoly(poly_var).getPos(v);
        PolyTermRef v_term = getPoly(poly_var).find(v);
        pta[v_term].coef += c;
        if (pta[v_term].coef == 0) {
            pta.free(v_term);
            bra[lva[v].getBindedRowsRef()].remove(poly_var);
            pos = -1;
        }
    }
    else {
        if (getPoly(poly_var).getUnusedCap() == 0) {
            // We need to allocate a new polynomial with bigger capacity.
            PolyRef pr_new = pa.alloc(getPolyRef(poly_var), getPoly(poly_var).size() + 1);
            lva[poly_var].setPolyRef(pr_new);
        }
        pos = getPoly(poly_var).size();
        getPoly(poly_var).append(pta.alloc(c, v));
        bra[lva[v].getBindedRowsRef()].add(v, getPoly(poly_var).size()-1);
    }
    return pos;
}

void PolyStore::update(PolyRef pr, PolyTermRef old, LVRef var, const opensmt::Real& coef)
{
    int idx = pa[pr].getPos(pta[old].var);
    pa[pr].varToIdx.remove(pta[old].var);
    pa[pr].varToIdx.insert(var, idx);
    pta[old].var = var;
    pta[old].coef = coef;
}