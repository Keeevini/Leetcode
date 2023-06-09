public int[] twoSum(int[] nums, int target) {
	HashMap<Integer, Integer> m = new HashMap<>();
	int[] ans = new int[2];
	
	for(int a = 0; a < nums.length; a++) {
		if(m.containsKey(new Integer(target-nums[a]))) {
			ans[0] = a;
			ans[1] = m.get(new Integer(target-nums[a])).intValue();
			break;
		}
		
		m.put(new Integer(nums[a]), new Integer(a));
	}
	
	return ans;
		
}