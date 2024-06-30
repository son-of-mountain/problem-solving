class Solution(object):
    def targetIndices(self, nums, target):
        nums.sort()
        tab=[]
        for i in range(len(nums)):
            if nums[i] == target:
                tab.append(i)
        return tab

        