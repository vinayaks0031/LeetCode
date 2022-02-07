class Solution {
public:
    char findTheDifference(string s, string t) {
        int sSum=0;
        int tSum=0;
        
        for(auto i:s) sSum+=i;
        for(auto i:t) tSum+=i;
        
        return char(tSum-sSum);
    }
};