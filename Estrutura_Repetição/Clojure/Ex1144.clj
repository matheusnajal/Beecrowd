(def v (read))

(doall
 (map (fn [x]
        (println (format "%d %d %d" x (* x x) (* x x x)))
        (println (format "%d %d %d" x (+ (* x x) 1) (+ (* x x x) 1))))
      (range 1 (+ v 1))))