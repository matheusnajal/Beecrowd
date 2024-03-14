(defn valores [a, b, c, d] 
  (if (and (> b c) 
           (> d a) 
           (> (+ c d) (+ a b)) 
           (pos? c) 
           (pos? d)
           (even? a)) 
    (println "Valores aceitos")
    (println "Valores nao aceitos")))

(valores (read) (read) (read) (read))