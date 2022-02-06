class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n=nums.size();
       
        vector<int> left;
        vector<int> right(n+1);
        vector<int> ans;
        int one=0;
        int zero=0;
        
        right[n]=0;
        left.push_back(0);
        
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            left.push_back(zero);
        }
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1) one++;
            right[i]=one;
        }
        
        int temp=0;
        for(int i=0;i<=n;i++){
            if(temp<(left[i]+right[i])){
                ans.clear();
                temp=left[i]+right[i];
                ans.push_back(i);
            }else if(temp==(left[i]+right[i])) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};