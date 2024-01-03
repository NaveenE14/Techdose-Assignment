class Solution {
public: // KADANE'S ALGORITHM
    int maxSubArray(vector<int>& nums) {
      int maxx=INT_MIN;
      int sum=0;
      for(int i=0;i<nums.size();i++){
          if(sum<0){
              sum=0;
          }
          sum+=nums[i];
          maxx=max(maxx,sum);
          
      }
      return maxx;
    }
};
