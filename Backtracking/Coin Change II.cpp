class Solution {
public:
    int rec(int index,int amount,vector<int>&coins,int size,vector<vector<int>>&dp){
        if(index==size){
            return 0;
        }
        if(amount<0){
            return 0;
        }
        if(amount==0){
            return 1;
        }
        if(dp[index][amount]!=-1){
            return dp[index][amount];
        }
        int pick=rec(index,amount-coins[index],coins,size,dp);
        int notpick=rec(index+1,amount,coins,size,dp);
        return dp[index][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
       vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1 , -1));
       int ways=rec(0,amount,coins,coins.size(),dp);
       return ways;
    }
};
