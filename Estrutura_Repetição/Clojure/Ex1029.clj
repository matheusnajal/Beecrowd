(defn fibo
  ([len] (fibo (conj nil 1) len))
  ([lista len]
   (cond
     (= len (count lista)) lista
     (<= (count lista) 2) (recur (conj lista 1) len)
     :else (recur (conj lista (+ (nth lista 0) (nth lista 1))) len))))

(defn main []
  (doall (map (fn [x]
                (def b (int (read)))
                (def f (fibo (+ b 1)))
                (def call (int (- (* (- (reduce + f) (nth f 0)) 2) 2)))
                (println (format "fib(%d) = %d calls = %d" b call (nth f 0)))) (range (read)))))

(main)