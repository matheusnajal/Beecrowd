(defn media [a, b, c, d]
  (def nota (/ (+ (* a 2) (* b 3) (* c 4) (* d 1)) 10))
  (printf "Media: %.1f\n" (float (/
                                  (Math/round (* nota 100))
                                  100)))

  (cond (>= nota 7.00) (println "Aluno aprovado.")
        (< nota 5.00) (println "Aluno reprovado.")
        (and (>= nota 5.00)
             (< nota 6.9)) (do (println "Aluno em exame.")
                               (def notaE (read))
                               (printf "Nota do exame: %.1f\n" notaE)
                               (def mediaf (/ (+ notaE nota) 2))
                               (if (>= mediaf 5.0)
                                 (println "Aluno aprovado.")
                                 (println "Aluno reprovado."))
                               (println (str "Media final: " mediaf)))))

(media (read) (read) (read) (read))