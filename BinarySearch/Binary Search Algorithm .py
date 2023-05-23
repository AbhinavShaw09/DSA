#search space is reduced at each step
#iterative
def BinarySearch(nums,target):
  low = 0
  high = len(nums)-1

  while low <= high:
    mid = high + (low-high)//2
    if nums[mid] == target:
      return mid
    elif nums[mid]>target:
      high = mid-1
    else:
      low = mid+1
  return -1

if __name__ == '__main__':
  
  nums = [2, 5, 6, 8, 9, 10]
  target = 5

  index = BinarySearch(nums,target)

  if index == -1:
    print('element not found')
  else:
   print("element found at: "+str(index))
  
  
  
  #RecursiveSolution
#   def BinarySearch(nums,target,low,high):
#     if low>high:
#       return -1
    
#     mid =  mid = high + (low-high)//2
    
#     if if nums[mid] == target:
#       return mid
#     elif nums[mid]>target:
#       return BinarySearch(nums,target,low,mid-1)
#     else:
#        return BinarySearch(nums,target,mid+1,high)
    
# if __name__ == '__main__':
  
#   nums = [2, 5, 6, 8, 9, 10]
#   target = 5

#   index = BinarySearch(nums,target)

#   if index == -1:
#     print('element not found')
#   else:
#    print("element found at: "+str(index))
