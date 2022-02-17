class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        
        int i=1;
        while(i<n){
            if(nums[i-1]>=nums[i]){
                count++;
                if(count>1) return 0;
                if(i>=2 && nums[i-2]>=nums[i]){
                    nums[i]=nums[i-1];
                }
            }
            i++;
        }
        return 1;
    }
};