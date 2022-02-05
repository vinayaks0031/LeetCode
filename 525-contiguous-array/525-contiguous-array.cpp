class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int longestSubArray=0;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            if(nums[i]==0) sum+=-1;
            else sum+=1;
            if(sum==0) longestSubArray=max(longestSubArray,i+1);
            if(um.find(sum)!=um.end()){
                longestSubArray=max(longestSubArray,i-um[sum]);
            }else{
                um[sum]=i;
            }
        }
        return longestSubArray;
    }
};