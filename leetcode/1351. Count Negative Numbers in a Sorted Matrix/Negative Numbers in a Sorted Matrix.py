class Solution(object):
    def countNegatives(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        count = 0
        for row in range(len(grid)):
            l,h = 0,len(grid[0])-1
            while l<=h:
                mid = (l+h)//2
                if grid[row][mid] < 0:
                    count += (h-mid+1)
                    h = mid-1
                else:
                    l = mid+1
        return count

