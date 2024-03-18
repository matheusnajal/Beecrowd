(defn dentro-da-semi-quadra? [x y]
  (let [x-max 432
        y-max 468]
    (and (>= x 0) (<= x x-max) (>= y 0) (<= y y-max))))

(defn verificar-bola [coordenadas]
  (let [[x y] (mapv #(Integer/parseInt %) (clojure.string/split coordenadas #" "))]
    (if (dentro-da-semi-quadra? x y)
      "dentro"
      "fora")))

(let [entrada (read-line)]
  (println (verificar-bola entrada)))