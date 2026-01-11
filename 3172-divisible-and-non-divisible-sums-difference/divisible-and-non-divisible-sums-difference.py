class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        nums1=0
        nums2=0

        for i in range(1,n+1):
            if i%m==0:
                nums1=nums1+i
            else:
                nums2=nums2+i
        
        return nums2-nums1
