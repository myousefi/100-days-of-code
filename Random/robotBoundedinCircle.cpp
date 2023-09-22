class Solution {
public:
    bool isRobotBounded(string instructions) {
     
        vector<vector<int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}}; //N,E,S,W
        int x=0,y=0,dir=0;
        for(char ch:instructions){ // use &
            if(ch=='G'){
                x += directions[dir][0];
                y += directions[dir][1];
            }
            else if(ch=='L'){
                dir = (dir+3)%4;
            }
            else if(ch=='R'){
                dir = (dir+1)%4;
            }
        }
        return ((x==0 && y==0) || dir!=0);
    }
};
