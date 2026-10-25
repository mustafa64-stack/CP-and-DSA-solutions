class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlen=strs[0].size();
        for(int i=0;i<strs.size()-1;i++){
            string first=strs[i];
            string second=strs[i+1];
            int j;
            int mins=min(first.size(),second.size());
            for(j=0;j<mins;j++){
                if(first[j]!=second[j]) break;
            }
            minlen=min(minlen,j);
        }
      return strs[0].substr(0,minlen);  
    }
};