class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        deque<int> window;
        
        int i=0;
        
        while(i<n)
        {
            if(!window.empty() && window.front()==i-k) window.pop_front();
            
            while(!window.empty() && nums[window.back()]<nums[i]) 
                window.pop_back();
            window.push_back(i);
            
            if(k<=i+1) ans.push_back(nums[window.front()]);
            
            i++;
        }
        return ans;
    }
};