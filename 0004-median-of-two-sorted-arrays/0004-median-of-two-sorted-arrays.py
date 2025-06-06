class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        arr = nums1 + nums2
        arr = sorted(arr)
        n = len(arr)
        if(n == 1):
            return arr[0]
        if(n == 2):
            return (arr[0] + arr[1])/2
        if(n%2 == 1):
            return arr[n // 2]
        else:
            q = n // 2
            res = arr[q] + arr[q-1]
            return res/2;


        
