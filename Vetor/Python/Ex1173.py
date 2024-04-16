arr = []
n = int(input())
arr.append(n)

for i in range(10):
    arr.append(arr[i] * 2)
    print(f"N[{i}] = {arr[i]}")