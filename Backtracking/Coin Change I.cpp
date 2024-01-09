class Solution {
public:
    int rec(int index,vector<int>&coins ,int amount,int size,vector<vector<int>>&dp){
        if(amount==0){
            return 0;
        }
        if(amount <0 || index == size){
            return INT_MAX;
        }
        if(dp[index][amount]!=-1){
            return dp[index][amount];
        }
        int pick=rec(index,coins,amount-coins[index],size,dp);
        if(pick==INT_MAX) pick--;
        int notpick=rec(index+1,coins,amount,size,dp);
        return dp[index][amount]=min(1+pick,notpick);
    }
    int coinChange(vector<int>& coins,int amount){
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=rec(0,coins,amount,n,dp);
        return ans==INT_MAX?-1:ans;
    }
};
