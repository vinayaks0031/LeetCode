class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> w2(26,0);
        for(auto i:words2)
        {
            vector<int> temp(26,0);
            for(auto j:i) temp[j-'a']++;
            for(int i=0;i<26;i++) 
            {
                if(temp[i]>w2[i]) w2[i] += temp[i]-w2[i];
            }
        }
        
        for(auto i:words1)
        {
            vector<int> w1(26,0);
            int check=1;
            for(auto j:i) w1[j-'a']++;
            for(int i=0;i<26;i++)
            {
                if(w2[i] != 0 && w2[i] > w1[i] )
                {
                    check=0;
                }
            }
            if(check) ans.push_back(i);
            
            w1.clear();
        }
        
        return ans;
    }
};