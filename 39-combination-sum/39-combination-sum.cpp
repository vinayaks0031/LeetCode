class Solution {
private:
    void allCombinations(int idx,int target,vector<int>& candidates,vector<int>& temp,vector<vector<int>>& ans,int n)    
    {
        if(idx==n)
        {
            if(target==0) ans.push_back(temp);
                return;
        }
        temp.push_back(candidates[idx]);
        if(target>=candidates[idx])
            allCombinations(idx,(target-candidates[idx]),candidates,temp,ans,n);
        temp.pop_back();
        allCombinations(idx+1,target,candidates,temp,ans,n);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        int n=candidates.size();
        vector<int> temp;
        
        allCombinations(0,target,candidates,temp,ans,n);
        return ans;    
            
    }
};