class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int sim=0;
        
        while(j!=nums.size()){
            if(nums[i]==nums[j]){
                sim++;
                if(sim==1){
                    nums[++i]=nums[j];
                }
            }
            else{
                sim=0;
                nums[++i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};