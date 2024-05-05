(defn Josefus
  ([n] (let [qtd (first n)
             passos (second n)]
         (Josefus qtd passos 1 -1)))
  ([n k s t]
   (if (> s n) t
       (recur n k (inc s) (cond (= t -1) (mod (+ s k) s)
                                :else (mod (+ t k) s))))))

(defn print_results
  ([n] (print_results n 0 (count n)))
  ([n s e]
   (if (= s e) nil (do
                     (printf "Case %d: %d\n" (inc s) (inc (nth n s)))
                     (recur n (inc s) e)))))

(def qtd_casos (read))
(def valores_dos_casos (repeatedly qtd_casos #(repeatedly 2 read)))
(def respostas_dos_casos (map Josefus valores_dos_casos))
(print_results respostas_dos_casos)