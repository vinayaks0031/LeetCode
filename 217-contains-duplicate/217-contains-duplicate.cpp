class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> umap;
        
        for(auto i:nums)
        {
            umap[i]++;
        }
        
        for(auto i:umap)
        {
            if(i.second>1) return 1;
        }
        
        return 0;
    }
};