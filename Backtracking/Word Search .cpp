class Solution {
public:
    bool rec(vector<vector<char>>&a,int i,int j,string &word,int index,int size,vector<vector<int>>&vis){
        if(index==size){
            return true;
        }
        if(i==-1 || j==-1 || i==a.size() || j==a[0].size() || a[i][j]!=word[index] || vis[i][j]){
            return false;
        }
  
        vis[i][j]=1;
        bool right=rec(a,i+1,j,word,index+1,size,vis);
        bool left=rec(a,i-1,j,word,index+1,size,vis);
        bool top=rec(a,i,j+1,word,index+1,size,vis);
        bool bottom=rec(a,i,j-1,word,index+1,size,vis);
        vis[i][j]=0;
        return right||left||top||bottom;
    } 
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        bool ans;
        vector<vector<int>>vis(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            ans=rec(board,i,j,word,0,word.size(),vis);
            if(ans==true){
                return ans;
            }
            }
        }
        return ans;
    }
};
