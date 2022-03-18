class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int n=s.size();
        vector<int> map(26,0);
        vector<bool> check(26,0);
        stack<char> stack;
        string ans="";
        
        for(auto &i:s) map[i-'a']++;
        
        for(int i=0;i<n;i++)
        {
            if(check[s[i]-'a']==0)
            {
                char top=stack.top();
                while(!stack.empty() && top>s[i] && map[top-'a']>0)
                {
                    stack.pop();
                    check[top-'a']=0;
                    if(!stack.empty()) top=stack.top();
                }
                stack.push(s[i]);
                check[s[i]-'a']=1;
                map[s[i]-'a']--;
            }
            else map[s[i]-'a']--;
        }
        
        
        while(!stack.empty())
        {
            char top=stack.top();
            stack.pop();
            ans=top+ans;
        }
        
        return ans;
    }
};