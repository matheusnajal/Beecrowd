(defn media [nota]
  (cond
    (= nota 0) (println "E")
    (and
     (>= nota 1)
     (<= nota 35)) (println "D")
    (and
     (>= nota 36)
     (<= nota 60)) (println "C")
    (and
     (>= nota 61)
     (<= nota 85)) (println "B")
    (and (>= nota 86) (<= nota 100)) (println "A")))

(media (read))