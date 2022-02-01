class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<long long> temp(32,0);
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            for(int i=0;i<32;i++){
                if(num==0) break;    
                int bit=num&1;
                num=num>>1;
                temp[i]+=bit;
            }
        }
        long long x=1;
        long long ans=0;
        for(int i=0;i<32;i++){
            if(temp[i]%3==1){
                ans=ans+x;
            }
            x*=2;
        }
        return ans;
	}
};