class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        vector<int> hash(10001,0);
        int inc=0,exc=0;
        
        for(auto &i:nums) hash[i]++;
        
        for(int i = 0;i<=10000;i++)
        {
            int ni = exc + hash[i]*i;
            int ne = max(inc,exc);
            inc = ni;
            exc = ne;
        }
        return max(inc,exc);
        
    }
};