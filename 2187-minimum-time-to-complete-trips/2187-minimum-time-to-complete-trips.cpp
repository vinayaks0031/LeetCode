class Solution {
private:
    long long check(vector<int>& time,long long mid)
        {
            long long res=0;
            for(auto &i:time) {
                res+=mid/i;
            }
            return res;
        }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long low=1,high=1e14+1;
        long long ans=0;
        
        while(low<=high)
        {
            long long mid=low + (high-low)/2;
            long long tmp=check(time ,mid);
            if(tmp>=totalTrips)
            {
                  high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};