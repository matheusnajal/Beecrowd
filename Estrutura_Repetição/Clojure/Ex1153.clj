(defn fatorial [n]
  (reduce * (range 1 (inc n))))

(defn -main []
  (let [n (read-line)]
    (println (fatorial (Integer/parseInt n)))))

(-main)