class Solution {
private:
    void makeAllPermutations(int idx,vector<int> nums,vector<int> ds,unordered_map<int,int> umap, vector<vector<int>>& ans,int n)
    {
        if(idx==n){
           ans.push_back(ds);  
        }
        
        for(int i=0;i<n;i++)
        {
            if(umap[nums[i]]==1)
            {
                umap[nums[i]]--;
                ds.push_back(nums[i]);
                makeAllPermutations(idx+1,nums,ds,umap,ans,n);
                ds.pop_back();
                umap[nums[i]]++;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        unordered_map<int,int> umap;
        for(auto &i:nums)
        {
            umap[i]++;
        }
        int n=nums.size();
        makeAllPermutations(0,nums,ds,umap,ans,n);
        return ans;
    }
};