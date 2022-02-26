class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        
        for(auto &i:nums) 
        {
            mn=min(mn,i);
            mx=max(mx,i);
        }
        
        while(mn!=0)
        {
            int rem=mx%mn;
            mx=mn;
            mn=rem;
        }
        
        return mx; 
    }
};