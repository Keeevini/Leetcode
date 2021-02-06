public boolean containsDuplicate(int[] nums) {
	HashSet<Integer> set = new HashSet<>();
	for(int a = 0; a < nums.length; a++) {
		if(set.contains(nums[a]))
			return true;
		set.add(nums[a]);
	}
	return false;
}