class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=n;
        cout<<n<<endl;
        sort(intervals.begin(),intervals.end());
        for(int i=n-1;i>=1;i--){
            for(int j=i-1;j>=0;j--){
                if(intervals[i][1]<=intervals[j][1]){
                    count--;                  
                    break;
                } else if((intervals[i][0]==intervals[j][0]) && (intervals[i][1]>=intervals[j][1])){
                    intervals.erase(intervals.begin()+j);
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};