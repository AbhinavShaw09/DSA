def oneSwap(arr):
    a = -1
    b = -1
    for i in range(1,len(arr)):
        if arr[i-1] > arr[i] and a==-1:
            a = i-1
        else:
            b = i

    arr[a],arr[b] = arr[b],arr[a]
    return arr

arr = [3, 5, 6, 9, 8, 7]
arr = oneSwap(arr)
print(arr)
