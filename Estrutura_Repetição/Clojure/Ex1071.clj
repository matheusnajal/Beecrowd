(defn soma-impares [x y]
  (apply + (filter odd? (range (inc (min x y)) (max x y)))))

(defn ler-valores []
  (let [x (read-line)
        y (read-line)]
    [(Integer/parseInt x) (Integer/parseInt y)]))

(defn imprimir-resultado [resultado]
  (println resultado))

(defn -main []
  (let [[x y] (ler-valores)]
    (imprimir-resultado (soma-impares x y))))

(-main)