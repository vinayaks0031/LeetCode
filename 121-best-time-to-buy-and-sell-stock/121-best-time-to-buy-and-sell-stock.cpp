class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
//         int buyDay=INT_MAX;
//         int Idx=-1;
//         for(int i=0;i<n;i++){
//             if(prices[i]<buyDay){
//                 buyDay=prices[i];
//                 Idx=i;
//             }
//         }
        
//         int sellDay=0;
//         for(int i=Idx;i<n;i++){
//             sellDay=max(sellDay,prices[i]);
//         }
//         return sellDay-buyDay;
        int ansmx=0;
        int initial=prices[0];
        int mx=initial;
        for(int i=1;i<n;i++) {
            mx=max(prices[i],mx);
        }
        ansmx=mx-initial;
        for(int i=1;i<n-1;i++){
            mx=0;
            if(initial>prices[i]){
                initial=prices[i];
                for(int j=i+1;j<n;j++){
                    mx=max(prices[j],mx);
                }
                ansmx=max(ansmx,mx-initial);
            }
            
        }
        
        return ansmx;
    }
    
};