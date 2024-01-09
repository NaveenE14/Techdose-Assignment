class Solution {
public:
    int longestCommonSubsequence(string a, string b){
        vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1,0));
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string s="";
        int i=dp.size()-1,j=dp[0].size()-1;
        while(i>0 && j>0){
            if(a[i-1]==b[j-1]){
                s+=a[i-1];
            }
            else if(dp[i-1][j] > dp[i][j-1]){
                s+=a[i-1];
                i++;
            }
            else{
                s+=b[j-1];
                j--;
            }
        }
        cout<<s<<endl;
        return dp[a.size()][b.size()];
    }
};
