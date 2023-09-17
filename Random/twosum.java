class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer, Integer> _mapp = new HashMap<>();
        
        for(int i=0;i<nums.length;i++){
            int temp = target - nums[i];
            if(_mapp.containsKey(temp)){
                return new int[] {i,_mapp.get(temp)};
            }
            _mapp.put(nums[i],i);
        }
        return new int[] {-1,-1};
    }
}
