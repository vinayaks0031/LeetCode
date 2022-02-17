class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int> umap;
        int sum=0,count=0;
        umap[0]++;
        
        for(int i=0;i<n;i++){
        
            
            sum+=nums[i];
            if(umap.find(sum-k)!=umap.end()) count+=umap[sum-k];
            umap[sum]++;
        }
        
        
        return count;
    }
};