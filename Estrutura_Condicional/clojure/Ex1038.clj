(defn lanche [a, b]
  (def valor 0)
  (cond 
    (= a 1) (def valor (* b 4.00))
    (= a 2) (def valor (* b 4.50))
    (= a 3) (def valor (* b 5.00))
    (= a 4) (def valor (* b 2.00))
    (= a 5) (def valor (* b 1.50)))
  (printf "Total: R$ %.2f\n" valor))

(lanche (read) (read))