class Solution {
public:
    int divide(int dividend, int divisor) { 
        
        if(divisor==1) return dividend;
        if(divisor==-1) return (dividend==INT_MIN?INT_MAX:-dividend);
        
        int sign=dividend<0 ^ divisor<0 ? -1 : 1;
        long long n=labs(dividend);
        long long m=labs(divisor);
        long long t=0;
        long long Q=0;
        
        for(int i=31;i>=0;i--){
            if(t+(m<<i)<=n){
                t+=(m<<i);
                Q=(1<<i)|Q;
            }
        }
      
        return (Q*sign);
    }
};