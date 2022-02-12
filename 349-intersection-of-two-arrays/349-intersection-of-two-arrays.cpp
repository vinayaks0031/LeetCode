class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> nums1Hash(1001,0);
        vector<int> nums2Hash(1001,0);
        int n1=nums1.size();
        int n2=nums2.size();
        
        for(int i=0;i<n1;i++){
            nums1Hash[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            nums2Hash[nums2[i]]++;
        }
        for(int i=0;i<1001;i++){
            if(nums1Hash[i]>0 && nums2Hash[i]>0) ans.push_back(i);
        }
        return ans;
    }
};