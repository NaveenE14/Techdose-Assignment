
class Solution {
    void solve(TreeNode* root,vector<int>& a){
        if(root == NULL) return;
        a.push_back(root->val);
        solve(root->left,a);
        solve(root->right,a);

    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        return ans;
    }
}; 

//iterative

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
      vector<int>ans;
      if(root==NULL) return ans;
      stack<TreeNode*>s;
      s.push(root);
      while(!s.empty()){
          TreeNode* a=s.top();
          s.pop();
          if(a->right != NULL) s.push(a->right);
          if(a->left != NULL ) s.push(a->left);
          ans.push_back(a->val); 
      }
      return ans;
    }
};
