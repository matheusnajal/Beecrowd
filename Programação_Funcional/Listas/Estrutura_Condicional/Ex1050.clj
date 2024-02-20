(defn ddd [a]
  (cond (= a 61) (println "Brasilia")
        (= a 71) (println "Salvador")
        (= a 11) (println "Sao Paulo")
        (= a 21) (println "Rio de Janeiro") 
        (= a 32) (println "Juiz de Fora")
        (= a 19) (println "Campinas")
        (= a 27) (println "Vitoria")
        (= a 31) (println "Belo Horizonte")
        :else (println "DDD nao cadastrado")))

(ddd (read))