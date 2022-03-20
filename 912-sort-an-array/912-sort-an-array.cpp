class Solution {
private:
    void merge(vector<int>& nums,int s,int mid,int e)
    {
        int len1=mid-s+1;
        int len2=e-mid;
        
        int *arr1=new int[len1];        
        int *arr2=new int[len2];
        
        for(int i=0;i<len1;i++) arr1[i]=nums[i+s];        
        for(int i=0;i<len2;i++) arr2[i]=nums[i+mid+1];
        
        int k=s;
        int i=0,j=0;
        
        while(i<len1 && j<len2)
        {
            if(arr1[i]<arr2[j]){
                nums[k]=arr1[i];
                i++;
            }
            else {
                nums[k]=arr2[j];
                j++;
            }
            k++;
        }
        
        while(i<len1)
        {
            nums[k]=arr1[i];
            k++;i++;
        }
        while(j<len2)
        {
            nums[k]=arr2[j];
            k++;j++;
        }

    }
    
    void mergeSort(vector<int>& nums,int s,int e){
        if(s<e)
        {
            int mid=(s+e)/2;
            //left side
            mergeSort(nums,s,mid);
            //right side
            mergeSort(nums,mid+1,e);
            
            merge(nums,s,mid,e);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};