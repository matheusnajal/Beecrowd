(def tempo (read))
(def velocidadeM (read))

(def distancia (* velocidadeM tempo))

(def gasto (float (/ distancia 12)))

(println (format "%.3f" gasto))