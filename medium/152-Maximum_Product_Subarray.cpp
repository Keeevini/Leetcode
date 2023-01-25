int maxProduct(vector<int>& nums) {
	int ans = nums[0];
	int product = 1;
	
	for(int a = 0; a < nums.size(); a++) {
		ans = max(product *= nums[a], ans);
		if (nums[a] == 0) {
			product = 1;
		}
	}
	
	product = 1;
		
	for(int a = nums.size() - 1; a >= 0; a--) {
		ans = max(product *= nums[a], ans);
		if (nums[a] == 0) {
			product = 1;
		}
	}
	
	return ans;
}