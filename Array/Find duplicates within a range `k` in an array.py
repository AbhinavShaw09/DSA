def hasDuplicate(arr,k):
  s = set()

  for i in range(len(arr)):
    if arr[i] in s:
      return True
    if i >= k:
      s.remove(arr[i-k])
    s.add(arr[i])
  return False

if __name__ == "__main__":
  arr = [5, 6, 8, 2, 4, 6, 9]
  k = 4
  if(hasDuplicate(arr,k)):
    print("It has duplicates")
  else:
    print("It does not have duplicates")
