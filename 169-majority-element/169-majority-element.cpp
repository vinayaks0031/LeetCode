class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> hash;
        int n=nums.size();
        int co=n/2,ans=0;
        if(n==1) return nums[0];
        
        for(int i=0;i<n;i++) hash[nums[i]]++;
        
        for(auto i:hash){
            if(i.second > co){
                ans=i.first;
            }
        }
        return ans;
    }
};