(def fib [1 1])
(while (< (count fib) 38)
  (def fib (conj fib (+ (nth fib 0) (nth fib 1)))))

(def calls [2 0])
(while (< (count calls) 38)
  (def calls (conj calls (+ (nth calls 0) (nth calls 1) 2))))

(defn read-integer []
  (Integer/parseInt (read-line)))

(defn safe-nth [coll idx]
  (if (and (>= idx 0) (< idx (count coll)))
    (nth coll idx)
    "Index out of bounds"))

(defn -main []
  (let [n (read-integer)]
    (dotimes [i n]
      (let [a (read-integer)
            call-count (safe-nth calls (- a 1))
            fib-value (safe-nth fib (- a 1))]
        (println (str "fib(" a ") = " call-count " calls = " fib-value))))))

(-main)
