def minIndex(nums):
  s = set()
  minInd = -1
  for i in reversed(range(len(nums))):
    if nums[i] in s:
      minInd = i
    s.add(nums[i])
  return minInd

if __name__ == '__main__':
  nums = [1, 2, 3, 4, 5, 6]
  print(minIndex(nums))
      
