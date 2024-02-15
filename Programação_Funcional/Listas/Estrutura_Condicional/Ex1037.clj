(defn intervalo [a]
  (cond 
    (and (>= a 0) (<= a 25))  (println "Intervalo [0,25]")
    (and (> a 25) (<= a 50)) (println "Intervalo (25,50]")
    (and (> a 50) (<= a 75)) (println "Intervalo (50,75]")
    (and (> a 75) (<= a 100)) (println "Intervalo (75,100]")
    :else (println "Fora de intervalo")))

(intervalo (read))