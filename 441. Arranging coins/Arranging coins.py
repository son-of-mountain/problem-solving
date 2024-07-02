# just one problem of complexity, it should be reduced  
arr = [0] * 999999
arr[0] = 1
for i in range(1, 999999):
    arr[i] = arr[i - 1] + (i + 1)
class Solution(object):
    def arrangeCoins(self, n):
        lh, hh = 0, len(arr) - 1
        while lh <= hh:         #high height and low height
            mid = (lh + hh) // 2
            if mid < len(arr) - 1 and arr[mid] <= n < arr[mid + 1]:
                return mid + 1
            elif n > arr[mid]:
                lh = mid + 1
            else:
                hh = mid - 1
        return -1

