(defn calcular-s []
  (let [s (reduce + (map #(/ (inc (* 2 %)) (Math/pow 2 %)) (range 20)))]
    (format "%.2f" s)))

(println (calcular-s))