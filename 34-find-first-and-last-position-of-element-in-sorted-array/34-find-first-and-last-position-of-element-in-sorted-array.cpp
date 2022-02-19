class Solution {
public:
    int lastOcc(vector<int>& nums, int target, int n)
    {
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
            
        }
        return ans;
    }
    
    int firstOcc(vector<int>& nums, int target, int n)
    {
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
            
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        ans.push_back(firstOcc(nums,target,n));        
        ans.push_back(lastOcc(nums,target,n));
        return ans;
    }
};