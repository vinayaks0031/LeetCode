class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> even;
        unordered_map<int,int> odd;
        
        for(int i=0;i<nums.size();i+=2) even[nums[i]]++;
        for(int i=1;i<nums.size();i+=2) odd[nums[i]]++;
        
        int maxEven=0,numEven=0;
        int maxOdd=0,numOdd=0;
        
        for (auto i:even){
            if(maxEven<i.second){
                numEven=i.first;
                maxEven=i.second;
            }
        }
        
        for (auto i:odd){
            if(maxOdd<i.second){
                numOdd=i.first;
                maxOdd=i.second;
            }
        }
        
        int secondEven=0;
        int secondOdd=0;
        
        if(numOdd==numEven){
            if(maxEven>maxOdd){
                for (auto i:odd){
                    if(numOdd!=i.first) secondOdd=max(secondOdd,i.second);
                }
                if(secondOdd!=0) return n-(secondOdd+maxEven);
            }
            for (auto i:even){
                if(numEven!=i.first) secondEven=max(secondEven,i.second);
            }
            if(secondEven!=0) return n-(secondEven+maxOdd);
            if(maxEven>maxOdd) return maxOdd;
            else return maxEven;
        } 

        
        return n-(maxEven+maxOdd);
    }
};