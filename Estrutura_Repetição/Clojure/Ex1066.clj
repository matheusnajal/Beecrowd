(defn contar-valores [valores]
  (let [pares (count (filter even? valores))
        impares (count (filter odd? valores))
        positivos (count (filter pos? valores))
        negativos (count (filter neg? valores))]
    [pares impares positivos negativos]))

(defn main []
  (let [entrada (repeatedly read-line)
        valores (take 5 (map #(Integer/parseInt %) entrada))
        [pares impares positivos negativos] (contar-valores valores)]
    (println (str pares " valor(es) par(es)"))
    (println (str impares " valor(es) impar(es)"))
    (println (str positivos " valor(es) positivo(s)"))
    (println (str negativos " valor(es) negativo(s)"))))

(main)