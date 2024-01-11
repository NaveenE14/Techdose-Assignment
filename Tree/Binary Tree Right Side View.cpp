class Solution {
public:
    void preorder(TreeNode* root,int level,vector<int>&a){
        if(root==nullptr){
            return ;
        }
        if(level==a.size()){
            a.push_back(root->val);
        }
        preorder(root->right,level+1,a);
        preorder(root->left,level+1,a);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a;
        preorder(root,0,a);
        return a;
        
    }
};
