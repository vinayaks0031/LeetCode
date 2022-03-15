class Solution {
private:
    void makeUniquePermutations(int idx,vector<int>& nums,vector<int>& ds,set<vector<int>>& tmpAns,int n)
    {
        if(idx==n){
            tmpAns.insert(ds);
            return;
        }
        
        int prev=-11;
        for(int i=idx;i<n;i++)
        {
            if(prev!=nums[i])
            {
                prev=nums[i];
                ds.push_back(nums[i]);
                int tmp=nums[idx];
                nums[idx]=nums[i];
                nums[i]=tmp;
                makeUniquePermutations(idx+1,nums,ds,tmpAns,n);
                nums[i]=nums[idx];
                nums[idx]=tmp;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>> tmpAns;
        vector<int> ds;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        makeUniquePermutations(0,nums,ds,tmpAns,n);
        vector<vector<int>> ans(tmpAns.begin(),tmpAns.end());
        return ans;
    }
};