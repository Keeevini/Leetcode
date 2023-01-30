def find_duplicates(self, nums: List[int]) -> List[int]:
    ans = []
    for index, val in enumerate(nums):
        value = abs(val)
        if nums[value-1] < 0:
            ans.append(value)
        else:
            nums[value-1] = -nums[value-1]
    return ans