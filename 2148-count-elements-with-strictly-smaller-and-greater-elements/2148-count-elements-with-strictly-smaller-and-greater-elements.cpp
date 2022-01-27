class Solution {
public:
    int countElements(vector<int>& a){
        int count=0;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        for(auto i:a){
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        
        for(auto i:a){
            if(i>mini && i<maxi) count++;
        }
        return count;
    }
};