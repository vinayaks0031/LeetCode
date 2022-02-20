class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int pivot=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) pivot=i+1;
        }

        for(int i=0;i<n-1;i++){
            if(nums[(i+pivot)%n]>nums[(i+1+pivot)%n]){
                return 0;
            }
        }
        return 1;
    }
};