//
// Created by Matteo on 27/07/16.
//

#ifndef CLAUSE_SERVER_SMTLITERAL_H
#define CLAUSE_SERVER_SMTLITERAL_H

#include <string>
#include <list>


class SMTLemma {
private:
    int score;
public:
    SMTLemma(std::string smtlib) :
            score(0),
            smtlib(smtlib) { }

    //returns ​true if the first argument is less than (i.e. is ordered before) the second
    static bool compare(const SMTLemma *const &a, SMTLemma *const &b) {
        return a->score > b->score;
    }

    void increase() { //this->score = (this->score + 1) - this->score == 1 ? this->score + 1 : this->score;
        this->score++;
    }

    void decrease() { this->score--; }

    bool operator==(SMTLemma const &b) const { return this->smtlib == b.smtlib; }

    bool operator!=(SMTLemma const &b) const { return this->smtlib != b.smtlib; }

    bool operator<(SMTLemma const &b) const { return this->score < b.score; }

    bool operator>(SMTLemma const &b) const { return this->score > b.score; }

    bool operator<=(SMTLemma const &b) const { return this->score <= b.score; }

    bool operator>=(SMTLemma const &b) const { return this->score >= b.score; }

    std::string smtlib;
};


#endif //CLAUSE_SERVER_SMTLITERAL_H
