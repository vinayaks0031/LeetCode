class Solution {
public:

    int occ(vector<int>& nums, int target, int n)
    {
        int low=0,high=n-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }    
        }
        return low;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {

        int n=nums.size();
        int first=occ(nums,target,n);        
        int last=occ(nums,target+1,n)-1;
        if( first<n && nums[first]==target) return {first,last};
        return {-1,-1};
    }
};