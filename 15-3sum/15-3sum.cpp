class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
     
        vector<vector<int>> ans;
        
        for(int i=0;i<n-2;i++){
            
            if(i==0 || ( i>0 && nums[i]!=nums[i-1])){
                int low=i+1;
                int high=n-1;
                int sum=0-nums[i];
                while(low<high){
                        
                    if((nums[low]+nums[high])==sum){
                        ans.push_back({nums[i],nums[low],nums[high]});
                        int l=low;
                        int h=high;
                        while(low<high && nums[l]==nums[low]) low++;
                        while(low<high && nums[h]==nums[high]) high--;
                    }
                    else if((nums[low]+nums[high])>sum){
                        high--;
                    }
                    else low++;
                    
                }
            }
            
        }
        return ans;
    }
};