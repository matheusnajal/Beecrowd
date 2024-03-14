(def nome (read))
(def salarioF (read))
(def TotalV (read))

(def salario (+ salarioF (* TotalV 0.15)))
(println (str "TOTAL = R$ " (format "%.2f" salario)))