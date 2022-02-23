class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;){
            
            for(int j=i+1;j<n-2;){
                
                    int start=j+1;
                    int end=n-1;
                    int temp=target-(nums[i]+nums[j]);

                    while(start<end){

                        if(start==j) start++;
                        if(end==j) end--;

                        if((nums[start]+nums[end])==temp){
                            ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                            int stemp=start;
                            int etemp=end;
                            while(start<end && nums[start]==nums[stemp]) start++;
                            while(start<end && nums[end]==nums[etemp]) end--;
                        }
                        else if((nums[start]+nums[end])>temp) end--;
                        else start++;
                    }
                 int jprev=j;
                while(j<n && nums[j]==nums[jprev]) j++;
            }
           int iprev=i;
           while(i<n && nums[i]==nums[iprev]) i++;
        }
        return ans;
    }
};