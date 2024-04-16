arr = []

for _ in range(20):
    arr.append(int(input()))

for i in range(10):
    arr[i], arr[19 - i] = arr[19 - i], arr[i]

for i in range(20):
    print(f"N[{i}] = {arr[i]}")