class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26,0);
        vector <int> v2(26,0);
        for(auto &i:s){
            v1[(int)(i-'a')]++;
        } 
        for(auto &i:t){
            v2[(int)(i-'a')]++;
        } 
        return v1==v2;
    }
};