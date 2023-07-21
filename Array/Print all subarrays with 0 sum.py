def solve(arr):
    for i in range(len(arr)):
        total = 0
        for j in range(i,len(arr)):
            total += arr[j]
            if total == 0:
                print((i,j))
            

if __name__ == "__main__":
    arr = [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
    solve(arr)
        
