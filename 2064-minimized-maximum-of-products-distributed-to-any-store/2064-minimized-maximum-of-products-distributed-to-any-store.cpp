class Solution {
public:
    bool isDistributed(vector<int>& quantities,int mid,int n){
        int stores=0;
        for(auto i:quantities){
            int temp=i/mid;
            temp+=( i%mid != 0 ) ? 1 : 0;
            stores+=temp;
        }
        if(stores<=n) return 1;
        return 0;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        long long sum=0;
        for(auto i:quantities) sum+=i;
        
        int ans=0;
        long long low=1,high=sum;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            
            if(isDistributed(quantities,mid,n)){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};