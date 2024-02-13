(def R (read))

(def area (* (/ 4.0 3) 3.14159 (Math/pow R 3)))
(println "VOLUME =" (format "%.3f" area))