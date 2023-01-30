def max_sub_array(self, nums: List[int]) -> int:
    ans = nums[0]
    cur_sum = 0
    
    for val in nums:
        if cur_sum < 0:
            cur_sum = 0
        cur_sum += val
        ans = max(ans, cur_sum)
    return ans