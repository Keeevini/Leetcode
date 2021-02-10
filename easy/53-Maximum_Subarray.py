def maxSubArray(self, nums: List[int]) -> int:
    ans = nums[0]
    curSum = 0
    
    for val in nums:
        if curSum < 0:
            curSum = 0
        curSum += val
        ans = max(ans, curSum)
    return ans