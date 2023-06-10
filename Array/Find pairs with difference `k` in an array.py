def findPairs(nums,k):
  s = set()
  for i in nums:
    if i - k in s:
      print(i,i-k)
    if k+i in s:
      print(i,i+k)
    s.add(i)

if __name__ == '__main__':
  nums = [1, 5, 2, 2, 2, 5, 5, 4]
  findPairs(nums,3)
  
    
