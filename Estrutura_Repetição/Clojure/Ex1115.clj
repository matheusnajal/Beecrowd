(defn quadrante [x y]
  (cond
    (and (pos? x) (pos? y)) "primeiro"
    (and (neg? x) (pos? y)) "segundo"
    (and (neg? x) (neg? y)) "terceiro"
    (and (pos? x) (neg? y)) "quarto"
    :else "N/A"))

(defn ler-coordenadas []
  (let [coord (clojure.string/split (read-line) #" ")]
    (let [x (Integer/parseInt (first coord))
          y (Integer/parseInt (second coord))]
      (if (or (zero? x) (zero? y))
        nil
        (do
          (println (quadrante x y))
          (recur))))))

(defn main []
  (loop []
    (when (not= (ler-coordenadas) nil)
      (recur))))

(main)