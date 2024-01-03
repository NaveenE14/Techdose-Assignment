class Solution {
    vector<vector<int>> ans;
    void com(int index,vector<int> candidates,int size, int target,vector<int>a){
        if(target==0){
            ans.push_back(a);
            return ;
        }
  
        if(index==size){
            return;
        }
        if(candidates[index]<=target){
            a.push_back(candidates[index]);
            int e=target-candidates[index];
            com(index,candidates,candidates.size(),e,a);
            a.pop_back();
        }
        com(index+1,candidates,candidates.size(),target,a);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>a;
        com(0,candidates,candidates.size(),target,a);
        return ans;
    }
};
