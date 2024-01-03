class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=INT_MAX;
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<max){
                max=prices[i];
            }
            int a=prices[i]-max;
            if(a>profit){
                profit=a;
            }
        }
        return profit;
        
    }
};
