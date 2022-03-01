class Solution {
private: 
    void reverse(vector<char>& s,int low,int high) {
        if(low>=high) return;
        
        char temp=s[low];
        s[low]=s[high];
        s[high]=temp;
        
        reverse(s,low+1,high-1);
    }
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();
        int low=0,high=n-1;
        
        reverse(s,low,high);
    }
};