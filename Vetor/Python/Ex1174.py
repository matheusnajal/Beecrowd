arr = []

for i in range(100):
    n = float(input())
    arr.append(n)
    
    if arr[i] <= 10:
        print(f"A[{i}] = {(arr[i])}")