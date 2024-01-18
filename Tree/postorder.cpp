/*  class Solution {
    void solve(TreeNode* root, vector<int>&ans){
        if(root==NULL) 
             return;
        solve(root->left,ans);
        solve(root->right,ans);
        ans.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        return ans;

    }
}; 

// iterative 2 stack 
// Another approach would  be  using vector ans instead of stack and reverse ans 
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st1,st2;
        vector<int>ans;
        if( root  ==  NULL ) return ans;
        st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!= NULL){
                st1.push(root->left);
            }
            if(root->right != NULL) {
                st1.push(root->right);
            }
            
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};

