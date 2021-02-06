def maxProfit(self, prices: List[int]) -> int:
    low = prices[0]
    maxProfit = 0
    
    for value in prices:
        if value < low:
            low = value
        elif maxProfit < (value - low):
            maxProfit = (value - low)
    
    return maxProfit