(defn fibonacci-sequence [n]
  (let [fib (fn [n]
              (loop [a 0 b 1 n n]
                (if (zero? n)
                  a
                  (recur b (+ a b) (dec n)))))]
    (map fib (range n))))

(defn -main []
  (let [n (read-line)]
    (->> n
         (Integer/parseInt)
         fibonacci-sequence
         (clojure.string/join " ")
         println)))

(-main)