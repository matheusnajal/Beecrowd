(defn calcular-media [idades]
  (let [total (reduce + idades)
        qtd (count idades)]
    (/ (double total) qtd)))

(defn -main []
  (let [idades (take-while pos? (repeatedly #(Integer/parseInt (read-line))))]
    (when (seq idades)
      (let [media (calcular-media idades)]
        (println (format "%.2f" media))))))

(-main)