class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f = INT_MAX;
        int s = INT_MAX;
        for(int x:nums){
            if(x<=f){
                f=x;
            }
            else if(x<=s){
                s=x;
            }
            else{
                return true;
            }
        }
        return false;
    }
};