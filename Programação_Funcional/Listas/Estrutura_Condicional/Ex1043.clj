(defn triangulo [a, b, c]
  (if (and (< a (+ b c)) 
           (< b (+ a c)) 
           (< c (+ b a)))
    (printf "Perimetro = %.1f\n" (+ a b c)) 
    (printf "Area = %.1f\n" (/ (* (+ a b) c) 2))))

(triangulo (read) (read) (read))