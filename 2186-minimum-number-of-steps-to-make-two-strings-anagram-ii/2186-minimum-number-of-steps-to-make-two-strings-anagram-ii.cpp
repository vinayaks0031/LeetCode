class Solution {
public:
    int minSteps(string s, string t) {
        
        vector<int> shash(26,0);
        int ans=0;
        for(auto &i:s) shash[i-'a']++;
        for(auto &i:t) shash[i-'a']--;
        
        for(int i=0;i<26;i++) ans+=abs(shash[i]); 
        
        return ans;

    }
};