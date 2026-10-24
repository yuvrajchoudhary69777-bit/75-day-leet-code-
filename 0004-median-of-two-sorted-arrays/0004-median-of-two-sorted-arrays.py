class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        arr = nums1 + nums2
        arr.sort()

        n = len(arr)

        if n % 2 == 1:
            return float(arr[n // 2])
        else:
            mid1 = arr[n // 2 - 1]
            mid2 = arr[n // 2]

            return (mid1 + mid2) / 2.0

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna