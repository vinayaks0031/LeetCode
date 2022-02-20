class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        if (a[0] != b[0]){
            return a[0] < b[0];
        }else{
            return a[1] > b[1];
        }
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
        int _max=-1;
        sort(intervals.begin(),intervals.end(),comp);
        
        for(auto &i:intervals) cout<<i[0]<<" "<<i[1]<<endl;
         for (int i =0 ; i<intervals.size(); i++){
            if (intervals[i][1] <= _max){
                count ++;
            }else{
                _max = intervals[i][1];
            }
        }
        return n-count;
    }
};