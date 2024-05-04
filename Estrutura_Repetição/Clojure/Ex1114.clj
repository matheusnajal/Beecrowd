(defn verificar-senha []
  (let [senha-correta 2002]
    (letfn [(verificar [senha]
              (if (= (Integer/parseInt senha) senha-correta)
                (println "Acesso Permitido")
                (do
                  (println "Senha Invalida")
                  (verificar (read-line)))))]
      (verificar (read-line)))))

(verificar-senha)