class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int pre=0,c=0;
        for(int i=0;i<nums.size();i++) {
             pre+=nums[i];
             int rem=pre-k;
             c+=m[rem];
             m[pre]++;
        }
        return c;
    }
};
