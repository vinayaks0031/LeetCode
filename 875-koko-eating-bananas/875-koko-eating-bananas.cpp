class Solution {
public:
    bool eatBananas(vector<int>& piles,int mid, int h){
        int bananaHourCount=0;
        int n=piles.size();
        
        for(int i=0;i<n;i++){
            int pile=piles[i];
            int temp=pile/mid;
            temp+=( pile%mid != 0 ? 1 : 0 );
            bananaHourCount+=temp;
            if(bananaHourCount>h) return 0;
        }
        return 1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=0;
        for(auto i:piles){
            mx=max(mx,i);
        }
        int low=1,high=mx;
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(eatBananas(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};