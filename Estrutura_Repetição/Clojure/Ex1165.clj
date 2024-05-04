(defn primo? [n]
  (and (> n 1)
       (every? #(not= 0 (rem n %)) (range 2 (Math/sqrt (inc n))))))

(defn processar-caso [x]
  (if (primo? x)
    (println (str x " eh primo"))
    (println (str x " nao eh primo"))))

(defn main []
  (let [n (Integer/parseInt (read-line))]
    (dotimes [_ n]
      (let [x (Integer/parseInt (read-line))]
        (processar-caso x)))))

(main)