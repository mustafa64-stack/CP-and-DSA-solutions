class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cs=0,ans=0,df;
        for(int i=1;i<prices.size();i++){
            df=prices[i]-prices[i-1];
            cs=max(df+cs,0);
            ans=max(cs,ans);
        }return ans;
    }
};