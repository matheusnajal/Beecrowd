(defn bhaskara [a b c]
  (let [delta (- (Math/pow b 2) (* 4 a c))]
    (if (or (= a 0.0) (<= delta 0))
      (println "Impossivel calcular")
      (let [r1 (/ (+ (- b) (Math/sqrt delta)) (* 2 a))
            r2 (/ (- (- b) (Math/sqrt delta)) (* 2 a))]
        (println (str "R1 = " (format "%.5f" r1)))
        (println (str "R2 = " (format "%.5f" r2)))))))

(bhaskara (read) (read) (read))