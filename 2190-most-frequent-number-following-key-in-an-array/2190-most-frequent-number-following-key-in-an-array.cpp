class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int ,int> umap;
        int n=nums.size();
        
        int start=0;
        for(int i=0;i<n-1;i++) {
            if(key==nums[i]){
                umap[nums[i+1]]++;
            }  
        }
        int mx=INT_MIN;
        int ans=0;
        for(auto &i:umap){
            if(i.second>mx){
                mx=i.second;
                ans=i.first;
            }
        }
        
        return ans;
    }
};