valores = int(input())

for i in range(valores):
    v = int(input())

    if v != 0:
        if v % 2 == 0:
            if v > 0:
                print("EVEN POSITIVE")
            else:
                print("EVEN NEGATIVE")
        else:
            if v > 0:
                print("ODD POSITIVE")
            else:
                print("ODD NEGATIVE")
    else:
        print("NULL")