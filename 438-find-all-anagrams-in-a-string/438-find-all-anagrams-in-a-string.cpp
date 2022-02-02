class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
    
        int ps=p.size();
        int sz=s.size();
    
        if(ps>sz) return ans;
        vector<int> phash(26,0);
        vector<int> hash(26,0);
        
        int right=0,left=0;
        
        while(right<ps){
            phash[p[right]-'a']++;
            hash[s[right]-'a']++;
            right++;
        }
        right--;
        while(right<sz){
            if(phash==hash) ans.push_back(left);
            
            right++;
            if(right!=sz) hash[s[right]-'a']++;
            hash[s[left]-'a']--;
            left++;
        }
        return ans;
    }
};