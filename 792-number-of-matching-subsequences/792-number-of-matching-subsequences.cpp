class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        int sn=s.size();
        int cnt=0;
        unordered_map<string,int> present;
        unordered_map<string,int> notPresent;
        
        for(auto &i:words)
        {
            int n=i.size();
            int j=0;
            if(present.find(i)==present.end() && notPresent.find(i)==notPresent.end())
            {
                for(int k=0;k<sn && j<n;k++)
                {
                    if(i[j]==s[k]) j++;
                }
                if(j==n)
                {
                  present[i]++;
                    cnt++;
                }
                else
                {
                    notPresent[i]++;
                }
            }
            else if(notPresent.find(i)==notPresent.end()) cnt++;
        }
        return cnt;
    }
};