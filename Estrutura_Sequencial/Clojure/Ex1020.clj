(def Idade (read))

(def A (/ Idade 365))
(def Idade (mod Idade 365))

(def M (/ Idade 30))
(def Idade (mod Idade 30))

(def D (mod Idade 30))

(printf "%d ano(s)\n%d mes(es)\n%d dia(s)\n" (int A) (int M) (int D))