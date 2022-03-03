class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> dif;
        int n=nums.size();
        
        for (int i=1;i<n;i++)
        {
            dif.push_back(nums[i-1]-nums[i]);    
        }
        
        int cnt=1 ,ans=0,curr=0;
        
        if(dif.size()<=1) return 0;
        else curr=dif[0];
        
        for(int i=1;i<n-1;i++) 
        {
              if(dif[i]==curr) 
                  cnt++;
              else 
              {
                  if(cnt>=2) 
                      ans+= (cnt *(cnt-1))/2;
                  cnt=1;
                  curr=dif[i];
              }
        }
        ans+=(cnt *(cnt-1))/2;
        
        return ans;
    }
};