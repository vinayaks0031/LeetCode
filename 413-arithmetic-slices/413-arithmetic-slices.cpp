class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> dif;
        int n=nums.size();
        
        if(n<3) return 0;
            
        int ans=0,cnt=1;
        int curr=nums[0]-nums[1];
        
        for (int i=2;i<n;i++)
        {
            int dif=nums[i-1]-nums[i];
            if(dif==curr)
            {
                cnt++;
            }
            else
            {
                ans+= (cnt *(cnt-1))/2;
                cnt=1;
                curr=dif;
            }
        }
        
        ans+=(cnt *(cnt-1))/2;
        
        return ans;
    }
};