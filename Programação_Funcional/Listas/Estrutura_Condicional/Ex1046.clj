(defn tempo [a, b]
  (do 
    (if (<= b a) 
      (println (str "O JOGO DUROU " (- (+ b 24) a) " HORA(S)"))
      (println (str "O JOGO DUROU " (- b a) " HORA(S)")))))
(tempo (read) (read))