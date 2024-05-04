(defn gcd [a b]
  (if (zero? b)
    a
    (recur b (mod a b))))

(defn max_pilha_trocada [f1 f2]
  (gcd (max f1 f2) (min f1 f2)))

(defn -main []
  (let [n (Integer/parseInt (read-line))]
    (dotimes [_ n]
      (let [[f1 f2] (map read-string (clojure.string/split (read-line) #" "))]
        (println (max_pilha_trocada f1 f2))))))

(-main)