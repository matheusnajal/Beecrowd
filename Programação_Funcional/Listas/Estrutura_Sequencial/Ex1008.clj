(def numeroF (read))
(def numeroH (read))
(def valorH (read))

(def valor (* numeroH valorH))

(println (str "NUMBER = " numeroF "\n" 
              "SALARY = U$ " (format "%.2f" valor)))
