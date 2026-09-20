class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        for(int i=0;i<s.size()/2;i++){
            c=s[s.size()-i-1];
            s[s.size()-i-1]=s[i];
            s[i]=c;
        }
        for(auto i :s) cout<<i;
    }
};