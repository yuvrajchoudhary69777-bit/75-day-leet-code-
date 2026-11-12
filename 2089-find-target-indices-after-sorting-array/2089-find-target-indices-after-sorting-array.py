class Solution(object):
    def targetIndices(self, nums, target):
        nums.sort()
        return [i for i in range(len(nums)) if nums[i] == target]
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna