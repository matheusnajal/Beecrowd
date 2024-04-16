arr = []

for i in range(10):
    n = int(input())

    if n <= 0:
        arr.append(1)
    else:
        arr.append(n)
    
    print(f"X[{i}] = {arr[i]}")