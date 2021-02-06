int maxProfit(vector<int>& prices) {
        
	int maxProfit = 0;
	int low = prices[0];
	
	for(int a = 1; a < prices.size(); a++) {
		if(prices[a] < low) {
			low = prices[a];
		}
		else if (prices[a] - low > maxProfit) {
			maxProfit = prices[a] - low;
		}
	}
	
	return maxProfit;
}