class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;i++){
            int temp=0;
            int num=i;
            while(num!=0){
                int digit=num%10;
                num/=10;
                temp+=digit;
            }
            if(temp%2==0) count++;
            
        }
        return count;
    }
};