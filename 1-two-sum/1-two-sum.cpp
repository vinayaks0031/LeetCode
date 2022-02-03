class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        
        int n=nums.size();
      
        vector<int> ans;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(umap.find(temp)==umap.end()){
                umap[nums[i]]=i;
            }else{
                ans.push_back(i);
                ans.push_back(umap[temp]);
                return ans;
            }
        }
        return ans;
    }
};