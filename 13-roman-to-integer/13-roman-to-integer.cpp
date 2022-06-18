class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n=s.size();
        unordered_map<char,int> umap{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        
        for(int i=0;i<n;)
        {
            if(i<n-1 && umap[s[i]]<umap[s[i+1]])
            {
                ans+=umap[s[i+1]]-umap[s[i]];
                i+=2;
            }
            else
            {
                ans+=umap[s[i]];
                i++;
            }
        }
        return ans;
    }
};