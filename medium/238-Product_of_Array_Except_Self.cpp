vector<int> productExceptSelf(vector<int>& nums) {
	
	vector<int> answer;
	answer.push_back(1);
	
	for(int a = 1; a < nums.size(); a++) {
		answer.push_back(nums[a - 1] * answer[a - 1]);
	}
	
	int R = 1;
	for(int a = nums.size()-1; a >= 0; a--) {
		answer[a] = answer[a] * R;
		R *= nums[a];
	}
	
	return answer;
	
}