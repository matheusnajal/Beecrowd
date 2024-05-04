(defn contar-abastecimentos-puros [abastecimentos codigo]
  (if (= codigo 4)
    abastecimentos
    (if (contains? abastecimentos codigo)
      (update abastecimentos codigo inc)
      abastecimentos)))

(defn contar-abastecimentos-impuros []
  (loop [abastecimentos {1 0, 2 0, 3 0}]
    (let [codigo (read)]
      (if (= codigo 4)
        (do
          (println "MUITO OBRIGADO")
          (doseq [[combustivel quantidade] abastecimentos]
            (println (str (condp = combustivel
                            1 "Alcool"
                            2 "Gasolina"
                            3 "Diesel")
                          ": " quantidade)))
          abastecimentos) 
          (recur (contar-abastecimentos-puros abastecimentos codigo))))))

(contar-abastecimentos-impuros)