class Solution {
public:
    bool isPalindrome(int x) {
        double rev_num=0;
    int num=x;
    int last_digit;
    while(num>0){
        last_digit=num%10;
        rev_num=rev_num*10+last_digit;
        num/=10;
    }
    if(rev_num==x){
        return true;
    }return false;
    }
};