class Solution {
private:
    void allSubsets(int idx,vector<vector<int>>& ans,vector<int>& nums,vector<int>& ds,int n)
    {
        ans.push_back(ds);
        int prev=-20;
        for(int i=idx;i<n;i++)
        {
            if(prev!=nums[i])
            {
                prev=nums[i];
                ds.push_back(nums[i]);
                allSubsets(i+1,ans,nums,ds,n);
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> ds;
        int n=nums.size();

        allSubsets(0,ans,nums,ds,n);
        return ans;
    }
};