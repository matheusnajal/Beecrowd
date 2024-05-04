(defn ordem [x y]
  (cond
    (< x y) "Crescente"
    (> x y) "Decrescente"))

(defn ler-entrada []
  (let [entrada (clojure.string/split (read-line) #" ")
        x (first entrada)
        y (second entrada)]
    (if (= (Integer/parseInt x) (Integer/parseInt y))
      (System/exit 0)
      (do
        (println (ordem (Integer/parseInt x) (Integer/parseInt y)))
        (recur)))))

(ler-entrada)