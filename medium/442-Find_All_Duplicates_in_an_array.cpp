vector<int> findDuplicates(vector<int>& nums) {
	vector<int> ans;
	
	for(int a = 0; a < nums.size(); a++) {
		int value = abs(nums[a]);
		if(nums[value-1] < 0) {
			ans.push_back(value);
		}
		else {
			nums[value-1] = -nums[value-1];
		}
	}
	return ans;
}