(set-logic QF_LRA)
(declare-fun f () Real)
(declare-fun b () Bool)
(assert (> 0 (ite b f 1)))
(check-sat)
(exit)
