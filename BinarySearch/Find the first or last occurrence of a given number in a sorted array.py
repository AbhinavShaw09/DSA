def findFirstOccurrence(nums,target):
   left,right = 0,len(nums)-1
   res = -1
   while left <= right:
     mid = (left+right)//2
     if nums[mid] == target:
       res = mid
       right = mid-1
     elif nums[mid] < target:
       left = mid+1
     else:
       right = mid-1
   return res

if __name__ == "__main__":
  nums = [2, 5, 5, 5, 6, 6, 8, 9, 9, 9]
  target = 5
 
  index = findFirstOccurrence(nums, target)
 
  if index != -1:
      print(f'The first occurrence of element {target} is located at index {index}')
  else:
      print('Element found not in the list')
 
