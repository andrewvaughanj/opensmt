(set-logic QF_LRA)
(declare-fun v1 () Bool)
(declare-fun v4 () Bool)
(declare-fun v12 () Bool)
(check-sat)
(assert (xor v12 v4))
(assert (= v12 (and v1 v4)))
(check-sat)
(push 1)
(check-sat)
