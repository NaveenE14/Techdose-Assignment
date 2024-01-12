class NumArray {
public:
    vector<int>a={0};
    NumArray(vector<int>& nums) {
      int sum=0;
      for(auto i:nums){
          sum+=i;
          a.push_back(sum);
      }
      
    }
    
    int sumRange(int left, int right) {
        return a[right+1]-a[left];
    }
};
