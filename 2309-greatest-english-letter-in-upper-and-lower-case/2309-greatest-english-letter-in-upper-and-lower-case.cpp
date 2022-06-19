class Solution {
public:
    string greatestLetter(string s) {
        vector<int> hash(32,0);
        vector<int> hashA(32,0);
        for(auto i:s)
        {
            if(i>='a' && i<='z')
            {
                hash[i-'a']=1;
            }
            if(i>='A' && i<='Z')
            {
                hashA[i-'A']=1;
            }
        }
        
        for(int i=31;i>=0;--i)
        {
            if(hash[i]==1 && hashA[i]==1){
                string ans="";
                ans+=i+'A';
                return ans;
            }
        }
        return "";
        return "";
    }
};