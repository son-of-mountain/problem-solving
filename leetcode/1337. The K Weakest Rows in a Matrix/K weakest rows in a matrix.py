class Solution(object):
    def kWeakestRows(self, mat, k):

        weak = []
        for i in range(len(mat)):
            l, h = 0, len(mat[0]) - 1
            while l <= h:
                mid = (l + h) // 2
                if mat[i][mid] == 1:
                    l = mid + 1  # check the right side for more 1s
                else:
                    h = mid - 1
            weak.append((l, i))  # l is number of soldiers , and i is number of rows

        weak.sort()

        return [weak[i][1] for i in range(k)]



