(def A (* (read) 3.5))
(def B (* (read) 7.5))

(def media (/ (+ A B) 11))

(println (str "MEDIA = " (format "%.5f" media)))