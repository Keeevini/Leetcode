def contains_duplicate(self, nums: List[int]) -> bool:
    counted_nums = set()
    for number in nums:
        if number in counted_nums:
            return True
        counted_nums.add(number)
    return False