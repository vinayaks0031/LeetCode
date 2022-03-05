class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        map<int,vector<int>> v;
        vector<int> ans;
        int j=0;
        
        for(auto &i:nums)
        {
            int pow=1;
            int temp=0;
            int num=i;
            
            if(i==0) temp=mapping[0];
            else while(num>0){
                int dig=num%10;
                temp+=mapping[dig]*pow;
                num/=10;
                pow*=10;
            }
            v[temp].push_back(i);
        }
        
        for(auto &i:v)
        {
            
            for(auto &j:i.second) ans.push_back(j);
        }
        return ans;
    }
};