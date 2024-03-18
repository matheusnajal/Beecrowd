(defn distancia [x1 y1 x2 y2]
  
  (println (format "%.4f" (Math/sqrt (+ (Math/pow (- x2 x1) 2) (Math/pow (- y2 y1) 2))))))

(distancia (read) (read) (read) (read))