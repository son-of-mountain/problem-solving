class Solution(object):
    def countPairs(self,nums,target):
        nums.sort()
        l,h=0,len(nums)-1
        count=0
        while l<h:
            if nums[l]+nums[h] < target:
                count = (h-l)+1
                l+=1
            else:
                h-=1

        
