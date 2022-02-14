class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        
        vector<int> even(2,0);
        vector<int> odd(2,0);
        
        for(int i=0;i<n;i+=2) even[s[i]-'0']++;
        for(int i=1;i<n;i+=2) odd[s[i]-'0']++;
        
        int ans=min((even[1]+odd[0]),(even[0]+odd[1]));
        
        int evenZero=even[0],evenOne=even[1];
        int oddZero=odd[0],oddOne=odd[1];
        
        for(int i=0;i<n;i++)
        {
            even[s[i]-'0']--;
            
            auto temp=even;
            even=odd;
            odd=temp;
            
            if((n-1)%2) odd[s[i]-'0']++;
            else even[s[i]-'0']++;
            
            ans=min(ans,(even[1]+odd[0]));
            ans=min(ans,(even[0]+odd[1]));
        }
        
        return ans;
        
    }
};