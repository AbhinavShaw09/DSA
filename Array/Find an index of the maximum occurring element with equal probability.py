def oddOccurringElement(arr):
  xor  = 0
  for i in arr:
    xor^=i
  return xor

if __name__ == "__main__":
  arr = [4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3]
  print(oddOccurringElement(arr))
