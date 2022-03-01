class Solution {
public:
    int dp[31] = {0};
    int fib(int n) {
        if(n==0 || n==1)
                return n;
        else if(dp[n]!=0)
                return dp[n];
        else
        {
            dp[n] = fib(n-1) + fib(n-2);
            return dp[n];
        }
    }
};