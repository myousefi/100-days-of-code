class Solution {
public:
    
    int nextNum(int n){
        int sum = 0;
         while(n>0){
           int temp = n%10;
           n = n/10;
           sum += temp*temp;
       }
        return sum;
    }
    
    bool isHappy(int n) {
       unordered_set<int> sett;
        
        while(n!=1 && sett.find(n)==sett.end()){
             sett.insert(n);
        n = nextNum(n);
        
           
        }
        return n==1;
        
    }
};
