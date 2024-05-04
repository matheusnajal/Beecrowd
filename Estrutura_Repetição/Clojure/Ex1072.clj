(defn contar-valores [n]
  (let [valores (repeatedly n #(Integer/parseInt (read-line)))]
    (let [dentro (reduce + (map #(if (and (>= % 10) (<= % 20)) 1 0) valores))
          fora (- n dentro)]
      (println (str dentro " in"))
      (println (str fora " out")))))

(defn main []
  (let [n (Integer/parseInt (read-line))]
    (contar-valores n)))

(main)