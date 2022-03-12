class Solution {
private:
    void makeCombinations(int idx,vector<int>& candidates,int target,vector<int> &ds,int n,vector<vector<int>>& ans)
    {
        if(target==0) ans.push_back(ds);
        if(idx==n || target<0) return;
        
        int prev=-1;
        for(int i=idx;i<n;i++)
        {
            if(prev!=candidates[i])
            {
                prev=candidates[i];
                ds.push_back(candidates[i]);
                makeCombinations(i+1,candidates,target-candidates[i],ds,n,ans);
                ds.pop_back(); 
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        
        makeCombinations(0,candidates,target,ds,n,ans);
        return ans;
    }
};