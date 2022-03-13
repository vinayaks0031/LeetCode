class Solution {
public:
    bool isValid(string s) {
        
        stack<int> st;
        st.push(s[0]);
        int n=s.size();
        char top='n';
        
        for(int i=1;i<n;)
        {
            
            if(!st.empty()) top=st.top();
            else top='n';
                
            if((top=='{' && s[i]=='}') || (top=='(' && s[i]==')') || (top=='[' && s[i]==']'))
            { 
                st.pop();
                if(i<n-1 && (s[i+1]=='{' || s[i+1]=='(' ||s[i+1]=='[' ))
                {
                    st.push(s[i+1]);
                    i+=2;
                }
                else i++;
            }
            else
            {
                st.push(s[i]);
                i++;
            }
        }
        return st.empty();
    }
};