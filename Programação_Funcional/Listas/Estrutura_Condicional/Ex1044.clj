(defn multiplos [a, b]
  (if (or (= (mod a b) 0) (= (mod b a) 0))
    (println "Sao Multiplos")
    (println "Nao sao Multiplos")))

(multiplos (read) (read))