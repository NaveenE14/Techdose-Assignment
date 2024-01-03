class Solution {
public:
    int minCost(string c, vector<int>& nt) {
        int n=c.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(c[i]==c[i+1]){
                int maxx=INT_MIN;
                int total=nt[i];
                maxx=max(total,maxx);
                while(c[i]==c[i+1] && i+1<n){
                    total+=nt[i+1];
                    maxx=max(nt[i+1],maxx);
                    i++;
                }
                total-=maxx;
                ans+=total;
            }
        }
        return ans;
    }
};
