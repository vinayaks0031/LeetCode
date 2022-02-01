class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // vector<long long> temp(32,0);
        // for(int i=0;i<nums.size();i++){
        //     int num=nums[i];
        //     int itr=0;
        //     while(num!=0){
        //         int bit=num&1;
        //         num=num>>1;
        //         temp[itr]+=bit;
        //         itr++;
        //     }
        // }
        // long long x=1;
        // long long ans=0;
        // for(int i=0;i<32;i++){
        //     if(temp[i]%3==1){
        //         ans=ans+x;
        //     }
        //     x*=2;
        // }
        // return ans;
        vector<int> t(32);////Made a array contain 32 elements.
    	int sz = nums.size();
    	int i, j, n;
    	for (i = 0; i < sz; ++i)
    	{
    		n = nums[i];
    		for (j = 31; j >= 0; --j)
    		{
    			t[j] += n & 1;//Find the last digit.
    			n >>= 1;
    			if (!n)
    				break;
    	    }
        }
	int res = 0;
	for (j = 31; j >= 0; --j)
	{
		n = t[j] % 3;//"3" represents k times. 
		if (n)
			res += 1 << (31 - j);
	}
	return res;
    }
};