class Solution {
public:
    int minSteps(string s, string t) {
        
        int sn=s.size(),tn=t.size();
        vector<int> shash(26,0);
        vector<int> thash(26,0);
        
        for(auto &i:s) shash[i-'a']++;
        for(auto &i:t) thash[i-'a']++;
        
        int ans=0;
        
        for(int i=0;i<26;i++)
        {
            if(shash[i]>0 && thash[i]>0) ans+= shash[i]>thash[i] ? thash[i] : shash[i]; 
        }
        
        return (sn+tn)-(ans*2);

    }
};