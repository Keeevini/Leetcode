def product_except_self(self, nums: List[int]) -> List[int]:
    ans = [len(nums)]
    ans[0] = 1
    
    for i in range(1, len(nums)):
        ans.append(nums[i - 1] * ans[i - 1]);
    
    R = 1
    for i in range(len(nums)-1, -1, -1):
        ans[i] = ans[i] * R;
        R *= nums[i]
    
    return ans