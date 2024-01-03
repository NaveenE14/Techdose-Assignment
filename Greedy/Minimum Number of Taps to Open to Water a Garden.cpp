class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<vector<int>>p;
        for(int i=0;i<ranges.size();i++)
        {
            p.push_back({i-ranges[i],i+ranges[i]});
        }
        int k=0,ans=0,mx=0,t=0;
        for(int j=0;j<n;j++){
        for(int i=0;i<=n;i++)
        {   
            if(p[i][0]<=t)
            {
                mx=max(p[i][1],mx);
            }
        }
            t=mx;
           ans++;
           if(t>=n)
           {
               return ans;
           }
          
        }
        return -1;
    }
};
