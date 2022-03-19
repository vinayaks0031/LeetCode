class Solution {
public:
    string smallestSubsequence(string s) {
        
        vector<int> hash(26,0);
        vector<bool> visit(26,0);
        stack<char> ds;
        
        for(auto &i:s) hash[i-'a']++;
        
        for(auto &i:s)
        {
            if(visit[i-'a']==0)
            {
                char top=ds.top();
                while(!ds.empty() && top>i && hash[top-'a']>0 )
                {
                    ds.pop();
                    visit[top-'a']=0;
                    if(!ds.empty()) top=ds.top();
                }
                ds.push(i);
                visit[i-'a']=1;
            }
            hash[i-'a']--;
        }
        
        string ans="";
        while(!ds.empty())
        {
            char top=ds.top();
            ans=top+ans;
            ds.pop();
        }
        
        return ans;
    }
};