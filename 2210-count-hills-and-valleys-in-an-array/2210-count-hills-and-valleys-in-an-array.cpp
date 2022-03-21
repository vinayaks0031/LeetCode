class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        
        int tmp=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[tmp]){
                nums[++tmp]=nums[i];
            }
        }
        
        for(int i=1;i<tmp;i++)
        {
            if(nums[i-1]>nums[i] && nums[i+1]>nums[i]) cnt++;            
            if(nums[i-1]<nums[i] && nums[i+1]<nums[i]) cnt++;
        }
        return cnt;
    }
};