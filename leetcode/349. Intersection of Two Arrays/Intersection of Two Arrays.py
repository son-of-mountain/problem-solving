class Solution(object):
    def bs(self,nums,target):
        l,h=0,len(nums)-1
        while l<=h:
            mid = (l+h)//2
            if nums[mid]==target:
                return target
            elif nums[mid]<target:
                l=mid+1
            else:
                h=mid-1
        return -1

    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1.sort()
        nums2.sort()
        # I added these conditions to simplify the search
        tab=[]
        if len(nums1)<len(nums2):
            for i in range(len(nums1)):
                if nums1[i] == self.bs(nums2,nums1[i]) and (nums1[i] not in tab):
                    tab.append(nums1[i])
        else:
            for i in range(len(nums2)):
                if nums2[i] == self.bs(nums1,nums2[i]) and (nums2[i] not in tab):
                    tab.append(nums2[i])
        return tab
