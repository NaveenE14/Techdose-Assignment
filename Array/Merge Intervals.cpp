class Solution {
public:
// optimal
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(ans.empty() || intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};
// brute
 class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            int j=i+1;
            while(j<n && intervals[j][0]>=a && intervals[j][0]<=b){
                if(intervals[j][1]>b){
                    b=intervals[j][1];
                }
                j++;
            }
            vector<int>temp={a,b};
            ans.push_back(temp);
            i=j-1;
        }
        return ans;
    }
}; 
