class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=t.size();
        int subn=s.size();
        int i=0,j=0,cnt=0;
        
        if(n==0 && subn==0) return true;
        
        while(j<n){
            if(s[i]==t[j]){
              cnt++;
              i++;
            }
            j++;
            if(cnt==subn) return true;
        }
        return false;
    }
};