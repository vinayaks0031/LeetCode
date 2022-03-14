// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void allSubsets(int idx,vector<int>& arr,multiset<int>& ans,int sum,int n )
    {
        if(idx==n)
        {
            ans.insert(sum);
            return;
        }
        
        sum+=arr[idx];
        allSubsets(idx+1,arr,ans,sum,n);
        sum-=arr[idx];
        allSubsets(idx+1,arr,ans,sum,n);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        multiset<int> ans;
        allSubsets(0,arr,ans,0,N);
        vector<int> finalans(ans.begin(),ans.end());
        return finalans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends