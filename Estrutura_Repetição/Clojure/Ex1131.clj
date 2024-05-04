(ns Ex1131
  (:require [clojure.string :as str]))

(defn estatisticas-grenais [resultados]
  (let [total-grenais (count resultados)
        vitorias-inter (count (filter #(= % :inter) resultados))
        vitorias-gremio (count (filter #(= % :gremio) resultados))
        empates (count (filter #(= % :empate) resultados))
        vencedor (if (> vitorias-inter vitorias-gremio)
                   :inter
                   (if (> vitorias-gremio vitorias-inter)
                     :gremio
                     :empate))]
    (println total-grenais "grenais")
    (printf "Inter:%d\n" vitorias-inter)
    (printf "Gremio:%d\n" vitorias-gremio)
    (printf "Empates:%d\n" empates)
    (println (str/capitalize (name vencedor)) "venceu mais")))

(defn ler-resultado-grenal []
  (let [gols-inter (read)
        gols-gremio (read)]
    (if (> gols-inter gols-gremio)
      :inter
      (if (> gols-gremio gols-inter)
        :gremio
        :empate))))

(defn ler-resultados []
  (let [resultado (ler-resultado-grenal)]
    (println "Novo grenal (1-sim 2-nao)")
    (if (= (read) 1)
      (conj (ler-resultados) resultado)
      [resultado])))

(defn -main []
  (let [resultados (ler-resultados)]
    (estatisticas-grenais resultados)))

(-main)