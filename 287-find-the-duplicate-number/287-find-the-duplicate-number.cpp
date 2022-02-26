class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            int idx=abs(nums[i]);
            
            if(nums[idx]>0) nums[idx]=0-nums[idx];
            else return idx;
        }
        
        for(auto &i:nums) i=abs(i);
        return 0;
    }
};