class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n=nums.size();
        int low=0,high=n-1;
        int prev=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=nums[0])
            {
                low=mid+1;
            }
            else
            {
                
                if(prev!=mid){
                   high=mid;
                   prev=high;
                }else break;
            }
        }
        
        if(low==n) return nums[0];
        return nums[high];
    }
};