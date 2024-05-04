(defn count-evens [numbers]
  (count (filter even? numbers)))

(defn -main []
  (let [numbers (repeatedly 5 #(Integer/parseInt (read-line)))]
    (println (str (count-evens numbers) " valores pares"))))

(-main)