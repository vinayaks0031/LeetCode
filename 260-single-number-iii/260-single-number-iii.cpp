class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xr=0;
        for(auto num:nums){
            xr=xr^num;
        }
        int rightMost=xr&(-xr);
        int first=xr;
        int second=xr;
        for(auto num:nums){
            if((rightMost&num)==0){
                first=first^num;
            }
            else{
                second=second^num;
            }
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};