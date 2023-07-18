def helper(arr):
    d = {}
    for i in range(len(arr)):
        d[arr[i]] = i
    j=1
    
    for key in sorted(d.keys()):
       arr[d[key]] = j
       j += 1
    return arr 

if __name__ == "__main__":
    arr = [10, 8, 15, 12, 6, 20, 1]
    arr = helper(arr) 
    print(arr)
