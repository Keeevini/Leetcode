public int maxProfit(int[] prices) {
	int maxProfit = 0;
	int low = prices[0];
	
	for(int a = 1; a < prices.length; a++) {
		if (prices[a] < low)
			low = prices[a];
		else if (prices[a] - low > maxProfit)
			maxProfit = prices[a] - low;
	}
	
	return maxProfit;
}