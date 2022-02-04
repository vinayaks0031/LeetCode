class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> n0; 
        vector<int> n1; 
        vector<int> diffv; 
        unordered_map<int, int> mp; 
        int ans = 0;
        int num0 = 0, num1 = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 0)
                num0++;
            if(nums[i] == 1)
                num1++;
            n0.push_back(num0);
            n1.push_back(num1);
            int diff = n0[i] - n1[i];
            diffv.push_back(diff);
            if(mp.find(diff) == mp.end())
                mp[diff] = i;
            else
                ans = max(ans, i - mp[diff]);
            if(diff == 0)
                ans = max(ans, i+1);
        }
        return ans;
    }
};