// select minimum , and swap it to first
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    mini=j;
                }
            }
            if(i!=mini) swap(nums[i],nums[mini]);
        }
        return nums;
    }
};
