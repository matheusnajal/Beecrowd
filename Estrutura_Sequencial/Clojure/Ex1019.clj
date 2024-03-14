(def tempo (read))

(def Horas (/ tempo 3600))
(def H (mod Horas 3600))

(def Minutos (/ tempo 60))
(def M (mod Minutos 60))

(def Segundos (mod tempo 60))

(printf "%d:%d:%d\n" (int H) (int M) (int Segundos))