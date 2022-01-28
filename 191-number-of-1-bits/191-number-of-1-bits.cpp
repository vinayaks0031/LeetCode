class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        
        //1st approach (%2)
        
        // while(n>0){
        //     if(n%2==1) count++;
        //     n/=2;
        // }
        
        //2nd approach (check last bit)
        while(n>0){
            if(n&1) count++;
            n= n>>1;
        }
        return count;
    }
};