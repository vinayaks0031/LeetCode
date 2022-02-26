class Solution {
public:
    int countPrimes(int n) {
        
        vector<int> primes(n,1);
        int count=0;
        
        for(int i=2;i<n;i++)
        {
            if(primes[i]!=0)
            {
                for(int j=i+i;j<n;j+=i) primes[j]=0;
            }
        }
        
        for(int i=2;i<n;i++) 
        {
            if(primes[i]==1) count++;
        }
        return count;
    }
};