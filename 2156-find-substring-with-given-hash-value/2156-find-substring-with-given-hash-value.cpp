class Solution {
public:
    // long long powerr(long long power,long long p,long long modulo){
    //     long long ans=1;
    //     while(p--){
    //         ans=(ans*power)%modulo;
    //     }
    //     return ans%modulo;
    // }
    
    string subStrHash(string s, long long power, long long modulo, long long k, long long hashValue) {
        int n=s.size();
        // for(int i=0;i<n-k+1;i++){
        //     long long temp=0;
        //     int p=0;
        //     for(int j=i;j<i+k;j++){
        //         temp+=(((s[j]-'a'+1)*powerr(power,p,modulo))%modulo);
        //         p++;
        //     }
        //     if(temp%modulo==hashValue){
        //         ans=s.substr(i,k);
        //         break;
        //     }
        // }
        
        
        long long hash=0;
        int idx=0;
        long long p=1;
        
        for(int i=n-1;i>=0;i--){
            hash= ((hash*power) % modulo + (s[i]-'a'+1)) % modulo;
                
            //remove last logic
            if(i+k>=n){
                p=(p*power)%modulo;
            }
            else{
                hash=(hash - ((s[i+k]-'a'+1)*p) % modulo + modulo) % modulo;
            }
            
            if(hash==hashValue){
                idx=i;
            }
        }
        return s.substr(idx,k);
    }
};