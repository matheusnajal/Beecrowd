(def v (read))

(doall
 (map (fn [x]
        (println (format "%d %d %d" x (* x x) (* x x x))))
      (range 1 (+ v 1))))