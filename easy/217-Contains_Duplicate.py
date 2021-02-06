def containsDuplicate(self, nums: List[int]) -> bool:
    s = set()
    for number in nums:
        if number in s:
            return True
        s.add(number)
    return False