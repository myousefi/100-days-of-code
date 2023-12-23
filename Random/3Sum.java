// two ptr

class Solution  {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;

        List<List<Integer>> ans = new ArrayList<>();
                if(n==0||n==1) return ans;
        Arrays.sort(nums);
        for(int i=0;i<n;i++){
            if(i>=1 && nums[i]==nums[i-1]){
                continue;
            }
            else{
              int start = i+1;
              int end = n-1;
                int comp = 0-nums[i];
                while(start<end){
                    int temp = nums[start]+nums[end];
                    if(temp<comp){
                        start++;
                    }
                    else if(temp>comp){
                        end--;
                    }
                    else{
                        ans.add(Arrays.asList(nums[i],nums[start],nums[end]));
                        start++;
                        end--;
                        while(start<end && nums[start]==nums[start-1]) start++;
                    }
                }
            }
            
        }
        
        return ans;
        
        
    }
}

//hash set 

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        List<List<Integer>> res = new ArrayList<>();
        
        if(n==0||n==1) return res;
        for(int i=0;i<n;i++){
            if(i>=1 && nums[i]==nums[i-1]){
                continue;
            }
            else{
                var sett = new HashSet<Integer>();
                for(int j=i+1;j<n;j++){
                    int comp = -nums[i] - nums[j];
                    if(sett.contains(comp)){
                        res.add(Arrays.asList(nums[i],nums[j],comp));
                        while(j+1<nums.length && nums[j]==nums[j+1]) {
                            j++;
                        }
                    }
                    sett.add(nums[j]);
                }
            }
        }
        return res;
    }
}
