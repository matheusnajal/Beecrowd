(def n 3.14159)
(def raio (read))
(def calculo (* n (Math/pow raio 2)))

(println (str "A=" (format "%.4f" calculo)))