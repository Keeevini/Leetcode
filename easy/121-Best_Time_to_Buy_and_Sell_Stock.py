def max_profit(self, prices: List[int]) -> int:
    low = prices[0]
    max_profit = 0
    
    for value in prices:
        if value < low:
            low = value
        elif max_profit < (value - low):
            max_profit = (value - low)
    
    return max_profit