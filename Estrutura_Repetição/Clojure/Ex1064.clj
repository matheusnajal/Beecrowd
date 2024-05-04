(defn read-input []
  (repeatedly 6 #(Double/parseDouble (read-line))))

(defn calculate [numbers]
  (let [positives (filter pos? numbers)
        count (count positives)
        avg (/ (reduce + positives) count)]
    [count (double (Math/round (* avg 10.0))) (/ 10.0)]))

(defn -main []
  (let [[count avg] (calculate (read-input))]
    (println (str count " valores positivos"))
    (println (/ avg 10))))

(-main)