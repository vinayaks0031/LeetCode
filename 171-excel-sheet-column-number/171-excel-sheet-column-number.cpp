class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n=columnTitle.size();
        long long col=1,ans=0;
        
        for(int i=n-1;i>=0;i--){
            ans+=col*(columnTitle[i]-'A'+1);
            col*=26;
        }
        return ans;
    }
};