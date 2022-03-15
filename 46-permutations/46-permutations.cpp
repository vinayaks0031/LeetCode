class Solution {
private:
    void makeAllPermutations(int idx,vector<int> nums,vector<int> ds,vector<vector<int>>& ans,int n)
    {
        if(idx==n)
        {
            ans.push_back(ds);
            return ;
        }
        
        for(int i=idx;i<n;i++)
        {
            ds.push_back(nums[i]);
            int temp=nums[idx];
            nums[idx]=nums[i];
            nums[i]=temp;
            makeAllPermutations(idx+1,nums,ds,ans,n);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=nums.size();
        makeAllPermutations(0,nums,ds,ans,n);
        return ans;
    }
};