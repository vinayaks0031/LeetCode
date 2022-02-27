class Solution {
   private:
        bool miniSpeed(vector<int>& dist, double hour,int mid){
            
            double hr=0;
            int n=dist.size();
            
            for(int i=0;i<n-1;i++)
            {
                double tmp=ceil(double(dist[i])/double(mid));
                hr+=tmp;
                
            }
            hr+=double(dist[n-1])/double(mid);
            if(hr<=hour)return true;
            else return false;
        }
    
    public:
        int minSpeedOnTime(vector<int>& dist, double hour) {

            int low=1,high=10000001;

            int ans=-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(miniSpeed(dist,hour,mid))
                {
                    ans=mid;
                    high=mid-1;
                }
                else low=mid+1;
            }
            return ans;
        }
};