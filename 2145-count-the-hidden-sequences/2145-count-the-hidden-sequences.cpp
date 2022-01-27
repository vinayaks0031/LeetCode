class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        
        long long sum=0;
        long long mini=0,maxi=0;
        
        for(auto num:differences){
            sum+=num;
            mini=min(mini,sum);
            maxi=max(maxi,sum);
        }
        long long lpb=lower-mini,upb=upper-maxi;
        return (upb-lpb+1>0?upb-lpb+1:0);
    }
};