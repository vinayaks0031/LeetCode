class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int ans=0;
        
        //bruteforce approach o(n^2)
        
//         for(int i=0;i<n;i++){
//             int leftmax=0;
//             int rightmax=0;
//             //leftmax
//             for(int j=0;j<i;j++) leftmax=max(leftmax,height[j]);
//             //rightmax
//             for(int j=n-1;j>i;j--) rightmax=max(rightmax,height[j]);
            
//             ans+=max(0,(min(leftmax,rightmax)-height[i]));
//         }
        
        //1st optimization (array of prefix ans postfix max) time:o(n) space:o(2n)
        
        vector<int> prefixMax(n,0),postfixMax(n,0);
        
        //prefix max
        for(int i=1;i<n;i++) prefixMax[i]=max(prefixMax[i-1],height[i-1]);
        
        //postfix max 
        for(int i=n-2;i>=0;i--) postfixMax[i]=max(postfixMax[i+1],height[i+1]);
        
        // calculating sum
        for(int i=0;i<n;i++) ans+=max(0,(min(prefixMax[i],postfixMax[i])-height[i]));
        
        
        //2nd optimization
        return ans;
    }
};