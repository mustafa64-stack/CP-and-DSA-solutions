class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0,p=0,flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            }else if(s[i]=='L'){
                l++;
                if(s[i+1]=='L' && s[i+2]=='L'){
                    flag=1;
                }
            }else if(s[i]=='P'){
                p++;
            }
        }
        if(a<2 && flag==0){
            return true;
        }else return false;
        
    }
};