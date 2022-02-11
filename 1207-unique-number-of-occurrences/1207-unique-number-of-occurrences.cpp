class Solution {
public:
  
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int ,int> umap;
        vector<int> temp;
        for(int i=0; i<n; i++){
            umap[arr[i]]++;
        }
        for(auto &p:umap){
            temp.push_back(p.second);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]==temp[i+1]) return 0;
        }
        return 1;
    }
};