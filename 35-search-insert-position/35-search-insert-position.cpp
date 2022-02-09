class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int first=0;
        int last=n-1;
        while(first<last){
            int mid=(first+last)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                last=mid-1;
            }else{
                first=mid+1;
            }
        }
        cout<<first<<last;
        if(target>nums[first]) return first+1;
        return first;
    }
};