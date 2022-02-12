class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int n2=s2.size();
        
        vector<int> s1Hash(26,0);
        vector<int> s2Hash(26,0);
        int i=0;
        while(i<n){
            s1Hash[s1[i]-'a']++;
            if(i<n2) s2Hash[s2[i]-'a']++;
            i++;
        }
        int j=0;
        while(i<=n2){
            if(s1Hash==s2Hash) return 1;
            if(i<n2) s2Hash[s2[i]-'a']++;
            s2Hash[s2[j]-'a']--;
            j++;
            i++;
        }
        return 0;
    }
};