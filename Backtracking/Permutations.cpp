class Solution {
public:
    void rec(int i,vector<vector<int>>&a,vector<int>&nums,int n){
        if(i==n){
            a.push_back(nums);
            return ;
        }
        
       for(int j=i;j<n;j++){
           swap(nums[j],nums[i]);
           rec(i+1,a,nums,n);
           swap(nums[j],nums[i]);
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>a;
        rec(0,a,nums,n);
        return a; 
    }
};
