# #using hashing
# def findMajority(nums):
#   d = {}
#   for i in nums:
#     d[i] = d.get(i,0) + 1

#   for i,v in d.items():
#     if v > len(nums)//2:
#       return i
#   return -1

# if __name__ == '__main__':
#   nums = [1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2]
#   res = findMajority(nums)
#   print(res)

def findMajority(nums):
  count = 0
  ele = -1
  for i in range(len(nums)):
    if count == 0:
      ele = nums[i]
      count+=1
    elif nums[i] == ele:
      count+=1
    else:
      count-=1
  return ele

if __name__ == '__main__':
  nums = [1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2]
  res = findMajority(nums)
  print(res)
