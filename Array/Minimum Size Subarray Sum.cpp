class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        long long sum=0;
        for(auto i:arr){
            sum+=i;
        }
        if(target>sum) return 0;
        sum=0;
        int n=arr.size();
        int i=0,j=0;
        int ans=n;
        while(j<n){
            if(sum+arr[j]<target){
                sum+=arr[j];
                j++;
            }
            else{
                ans=min(ans,j-i+1);
                sum-=arr[i];
                i++;
            }
        }
        return ans;
    }
};
