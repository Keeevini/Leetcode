int maxSubArray(vector<int>& nums) {
	int ans = nums[0];
	int curSum = 0;
	
	for(int a = 0; a < nums.size(); ++a) {
		if(curSum < 0)
			curSum = 0;
		curSum += nums[a];
		ans = max(ans, curSum);
	}
	return ans;
}