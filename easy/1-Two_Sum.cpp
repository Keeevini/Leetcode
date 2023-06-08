vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> m;
	vector<int> ans;
	
	for(int a = 0; a < nums.size(); a++) {
		if(m.count(target-nums[a]) == 1) {
			ans.push_back(a);
			ans.push_back(m.at(target-nums[a]));
			break;
		}
		
		m[nums[a]] = a;
		
	}
	
	return ans;
}