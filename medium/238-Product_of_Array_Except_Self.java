public int[] productExceptSelf(int[] nums) {
	int[] answer = new int[nums.length];
	
	answer[0] = 1;
	for (int a = 1; a < nums.length; a++) {
		answer[a] = nums[a - 1] * answer[a - 1];
	}
	
	int R = 1;
	for(int a = nums.length - 1; a >= 0; a--) {
		answer[a] = answer[a] * R;
		R *= nums[a];
	}
	
	return answer;
}