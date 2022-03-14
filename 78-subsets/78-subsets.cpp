class Solution {
private:
    void allSubsets(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,int n)
    {
        if(idx==n)
        {
            ans.push_back(ds);
            return;
        }
        allSubsets(idx+1,nums,ans,ds,n);
        ds.push_back(nums[idx]);
        allSubsets(idx+1,nums,ans,ds,n);
        ds.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        
        int n=nums.size();
        vector<int> ds;
        allSubsets(0,nums,ans,ds,n);
        return ans;
    }
};