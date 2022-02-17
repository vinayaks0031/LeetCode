class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> pre(n,0);
        vector<int> post(n,0);
        int rightSum=0,leftSum=0;
        
        if(n==1) return 0;
        
        for(int i=0;i<n;i++){
            rightSum+=nums[i];
            leftSum+=nums[n-1-i];
            
            pre[i]=rightSum;
            post[n-i-1]=leftSum;
        }
        
        for(int i=0;i<n;i++){
            if(pre[i]==post[i]) return i;
        }
        
        return -1;
    }
};