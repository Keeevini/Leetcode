public List<Integer> findDuplicates(int[] nums) {
	List<Integer> ans = new ArrayList<>();
	for(int a = 0; a < nums.length; a++) {
		int value = Math.abs(nums[a]);
		if(nums[value-1] < 0) {
			ans.add(value);
		}
		else {
			nums[value-1] = -nums[value-1];
		}
	}
	return ans;
}