class Solution {
public:
    string reverseWords(string s) {
        string rev;
        string word;
        int i=s.size()-1;
        while(i>=0){
            word="";
            while( i>=0 && s[i]!=' '){
                word.push_back(s[i]);
                i--;
            }
            i--;
            reverse(word.begin(),word.end());
            if(word.size()>0){
            rev.push_back(' ');
            rev+=word;}
        }
        return rev.size()==0 ? "":rev.substr(1);
    }
};