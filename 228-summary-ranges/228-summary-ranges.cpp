class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n=nums.size();
        vector<string> ans;
        
        if(n==0) return ans;
        
        vector<int> tmp;
        int count=nums[0];
        tmp.push_back(nums[0]);
        
        for (int i=1;i<n;i++) 
        {
            if ( nums[i] != (++count) )
            {
                int tn=tmp.size();
                if(tn>1)
                {
                    ans.push_back(to_string(tmp[0])+"->"+to_string(tmp[tn-1]));
                }
                else
                {
                    ans.push_back(to_string(tmp[0]));
                }
                tmp={nums[i]};
                count=nums[i];
            }
            else
            {
                tmp.push_back(nums[i]);
            } 
        }
        
        if(tmp.size()>1) ans.push_back(to_string(tmp[0])+"->"+to_string(tmp[tmp.size()-1]));
        else ans.push_back(to_string(tmp[0]));
        
        return ans;
    }
};