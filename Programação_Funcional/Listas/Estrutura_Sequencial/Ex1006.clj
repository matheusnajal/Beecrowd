(def a (* (read) 2))
(def b (* (read) 3))
(def c (* (read) 5))

(def media (/ (+ a b c) 10))
(println (str "MEDIA = " (format "%.1f" media)))