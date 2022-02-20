class Solution {
public:
    int findValue(vector<int>& nums, int target,int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int prev=-1;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(nums[0]<=nums[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        cout<<nums[start];
        if(target>=nums[start] && target<=nums[n-1]) return findValue(nums,target,start,n-1);
        return findValue(nums,target,0,start-1);
    }
};