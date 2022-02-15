class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        int i=0;
        int k=n-1;
        int j=0;
        
        if(n==1) return;
        
        while(1){
            if(j==0){
                if(i<k){
                    if(nums[k]!=2 && nums[i]==2){
                        swap(nums[k],nums[i]);
                        k--;
                        i++;
                    }
                    else if(nums[k]==2) k--;
                    else if(nums[i]==0 || nums[i]==1) i++;
                }
                else {
                    i=0;
                    k=n-1;
                    j=1;
                }
            }    
            if(j){
                 if(i<k){
                     if(nums[k]==0 && nums[i]==1){
                         swap(nums[k],nums[i]);
                         k--;
                         i++;
                    }
                    else if(nums[k]==1 || nums[k]==2) k--;
                    else if(nums[i]==0) i++;
                 }
                else break;
            }
        }
    }
};