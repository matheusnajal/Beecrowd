(defn val-pos [x]
  (count (filter pos? x)))

(defn -main []
  (def valores (repeatedly 6 read))
  (println (val-pos valores) "valores positivos"))

(-main)