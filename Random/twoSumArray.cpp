class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        vector<int> ans;
        int n = numbers.size();
        int end = n-1;
        while(start<=end){
            int temp = numbers[start]+numbers[end];
            if(temp==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(temp>target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
};
