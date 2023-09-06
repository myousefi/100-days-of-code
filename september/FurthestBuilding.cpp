class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int bricksused = 0;
        int diff = 0;
        priority_queue<int> pq;
        int n = heights.size();
        int i=0;
        for(;i<n-1;i++){
            
            if(heights[i+1]<=heights[i]){
                continue;
            }
            diff = heights[i+1]-heights[i];
            if(bricksused+diff<=bricks){
                pq.push(diff);
                bricksused = bricksused + diff;
                
            }
            
            else if(ladders>0){
                if(!pq.empty() && pq.top()>diff){
                    bricksused = bricksused - pq.top() + diff;
                    pq.pop();
                    pq.push(diff);
                }
                ladders--;
            }
            else{
                break;
            }
        }
        return i;
    }
};
