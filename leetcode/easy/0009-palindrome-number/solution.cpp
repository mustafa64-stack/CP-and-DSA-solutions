class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            long long n=x;
            long long rev_num=0;
            long long rem;
            while(n>0){
                rem=n%10;
                rev_num=rev_num*10+rem;
                n/=10;
            }
            if(rev_num==x) return true;
            else return false;
        }
        else return false;
    }
};