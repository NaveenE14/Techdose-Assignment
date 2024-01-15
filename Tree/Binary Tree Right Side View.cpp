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

// BFS queue
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           int n=q.size();
           for(int i=0;i<n;i++){
               TreeNode* a=q.front();
               q.pop();
               if(i==0){
                   ans.push_back(a->val);
               }
               if(a->right!=NULL) q.push(a->right);
               if(a->left!=NULL ) q.push(a->left);
           }
        }
        return ans;
    }
};
