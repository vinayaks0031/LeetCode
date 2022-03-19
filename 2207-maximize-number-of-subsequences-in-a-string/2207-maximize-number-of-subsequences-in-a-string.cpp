class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        
        int first=0,second=0;
        
        for(auto &i:text)
        {
            if(i==pattern[0]){
                first++;
            }
            else if(i==pattern[1])
            {
                second++;
            }
        }
       
        if(pattern[0]==pattern[1] ) 
        {
            second=first;
        }
        
        long long cnt=0;
        int n=text.size();
        int secondtemp=second;
        
        for(int i=0;i<n-1;i++)
        {
            if(text[i]==pattern[1]) --secondtemp;
            if(text[i]==pattern[0]) cnt+=secondtemp;
        }
        
        cnt += first > second ? first : second;
        return cnt;
    }
};