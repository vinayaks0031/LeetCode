class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0];
        string second=strs[1];
        string ans="";
        
        if(strs.size()==1) return strs[0]; 
        
        int n=min(first.size(),second.size());
        for(int i=0;i<n;i++){ //first two string
            if(first[i]==second[i]){
                ans=ans+first[i];
            }
            else break;
        }
        
        string check=ans; 
        n=strs.size();
        ans="";
        
        for(int i=2;i<n;i++){
            string temp=strs[i];
            for(int j=0;j<temp.size();j++){
                if(check[j]==temp[j]) ans=ans+temp[j];
                else break;
            }
            check=ans;
            ans="";
        }
        
        return check;
    }
};