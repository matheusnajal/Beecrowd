(defn processar-linha [linha]
  (let [[quantia tipo] (clojure.string/split linha #" ")
        quantia (Integer/parseInt quantia)
        tipo (first tipo)]
    [quantia tipo]))

(defn calcular-resultados [dados]
  (let [total-cobaias (reduce + (map first dados))
        total-coelhos (->> dados
                           (filter #(= (second %) \C))
                           (map first)
                           (reduce +))
        total-ratos (->> dados
                         (filter #(= (second %) \R))
                         (map first)
                         (reduce +))
        total-sapos (->> dados
                         (filter #(= (second %) \S))
                         (map first)
                         (reduce +))
        percentual-coelhos (/ (* 100.0 total-coelhos) total-cobaias)
        percentual-ratos (/ (* 100.0 total-ratos) total-cobaias)
        percentual-sapos (/ (* 100.0 total-sapos) total-cobaias)]
    [total-cobaias total-coelhos total-ratos total-sapos
     percentual-coelhos percentual-ratos percentual-sapos]))

(defn processar-dados [n]
  (vec (for [_ (range n)]
         (processar-linha (read-line)))))

(defn main []
  (let [n (Integer/parseInt (read-line))
        dados (processar-dados n)
        [total-cobaias total-coelhos total-ratos total-sapos
         percentual-coelhos percentual-ratos percentual-sapos] (calcular-resultados dados)]
    (println "Total:" total-cobaias "cobaias")
    (println "Total de coelhos:" total-coelhos)
    (println "Total de ratos:" total-ratos)
    (println "Total de sapos:" total-sapos)
    (println "Percentual de coelhos:" (format "%.2f" percentual-coelhos) "%")
    (println "Percentual de ratos:" (format "%.2f" percentual-ratos) "%")
    (println "Percentual de sapos:" (format "%.2f" percentual-sapos) "%")))

(main)