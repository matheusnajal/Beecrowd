for i in range(0, 21, 2):
    i: float = i / 10
    for j in range(1, 4):
        if i == 0 or i == 1 or i == 2:
            print(f"I={int(i)} J={int(j+i)}")
        else:
            print(f"I={i} J={j+i}")