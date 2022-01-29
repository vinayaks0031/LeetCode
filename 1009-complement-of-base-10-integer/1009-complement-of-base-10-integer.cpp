class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
    
        //with extra space
//         vector<int> storeBit;
//         while(n>0){
//             storeBit.push_back(n%2);
//             n/=2;
//         }
        
//         int x=1;
//         int ans=0;
        
//         for(int i=0;i<storeBit.size();i++){
//             if(storeBit[i]==1) storeBit[i]=0;
//             else storeBit[i]=1;
//             ans+=x*storeBit[i];
//             x*=2;
//         }
//         return ans;
        
        
        
        //without extra space
//         int ans=0;
//         int x=1;
        
//         while(n>0){
//             ans+=(1-(n%2))*x;
//             x*=2;
//             n/=2;
//         }
        
        
//      with nit masking
        int temp=~n;
        int mask=0;
        while(n>0){
            n=n>>1;
            mask=(mask<<1)|1;
        }
        return temp&mask;
    }
};