class Solution {
public:
    int reverse(int x) {
        int rev_num=0;
        int last_digit;
        while(x!=0){
            last_digit=x%10;
            if((rev_num>INT_MAX/10 || rev_num==INT_MAX/10 && rev_num%10<=last_digit) ||(rev_num<INT_MIN/10 || rev_num==INT_MIN/10 && rev_num%10>=last_digit))
            {
                return 0;
            }
            rev_num=rev_num*10+last_digit;
            x=x/10;
        }
        return rev_num;
    }
};