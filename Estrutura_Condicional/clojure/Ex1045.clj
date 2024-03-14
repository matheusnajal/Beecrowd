(defn tipo-triangulo [a b c]
  (let [lados (sort > [a b c])
        a (first lados)
        b (second lados)
        c (last lados)]
    (if (or (>= a (+ b c)) (<= (+ b c) a))
      (println "NAO FORMA TRIANGULO")
      (do
        (println "TRIANGULO ACUTANGULO")
        (if (= (* a a) (+ (* b b) (* c c)))
          (println "TRIANGULO RETANGULO"))
        (if (> (* a a) (+ (* b b) (* c c)))
          (println "TRIANGULO OBTUSANGULO"))
        (if (= a b c)
          (println "TRIANGULO EQUILATERO")
          (if (or (= a b) (= b c) (= a c))
            (println "TRIANGULO ISOSCELES")))))))

(let [a (read)
      b (read)
      c (read)]
  (tipo-triangulo a b c))