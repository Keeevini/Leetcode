from typing import List


def main():
    exit()




def two_sum(self, nums: List[int], target: int) -> List[int]:
    ans = []
    d = {}
    
    for index, val in enumerate(nums):
        if (target-val) in d:
            ans.append(index)
            ans.append(d[target-val])
            break

    d[val] = index
    return ans


main()