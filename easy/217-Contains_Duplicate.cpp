bool containsDuplicate(vector<int>& nums) {
	unordered_set<int> set;
	
	for(int a = 0; a < nums.size(); a++) {
		if(set.count(nums[a]) == 1)
			return true;
		set.insert(nums[a]);
	}
	return false;
}