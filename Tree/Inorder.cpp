 class Solution {
public:
    vector<int>ans;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
}; 
// iterative 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        stack<TreeNode*>s;
        TreeNode* node=root;
        while(1){
            if(node != NULL){
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty()) break;
                node =s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
};
