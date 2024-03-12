class Solution {
public:
    int reverse(int x) {
        long num=x;
        bool flag=true;
        long rev=0;
        if(num<0) {
            num*=-1;
            flag=false;
        }
        while(num!=0){
            int d=num%10;
            rev=rev*10+d;
            num=num/10;
        }
        if(rev<INT_MIN || rev> INT_MAX) return 0;
        else{
            if(flag==false) return static_cast<int>(-rev);
            else return static_cast<int>(rev);
        }
    }
};