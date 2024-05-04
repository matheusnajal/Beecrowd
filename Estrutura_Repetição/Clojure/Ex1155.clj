(defn calcular-s []
  (reduce + (map #(double (/ 1 %)) (range 1 101))))

(defn -main []
  (println (format "%.2f" (calcular-s))))

(-main)