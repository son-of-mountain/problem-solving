class Solution(object):
    def countPairs(self,nums,target):
        nums.sort()
        l,h=0,len(nums)-1
        while l<h:
            if nums[l]+nums[h] < target:
                count = (h-l)
                l+=1

        