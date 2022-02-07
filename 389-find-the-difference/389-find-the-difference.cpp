class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        
        vector<int> sHash(26,0);
        vector<int> tHash(26,0);
        int nt=t.size();
        int ns=s.size();
        for(int i=0;i<nt;i++){
            tHash[t[i]-'a']++;
        }
        for(int i=0;i<ns;i++){
            sHash[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(sHash[i]!=tHash[i]){
                ans='a'+i;
                break;
            }
        }
        return ans;
    }
};