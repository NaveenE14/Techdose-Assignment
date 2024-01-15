class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++){
                TreeNode* a=q.front();
                q.pop();
                if(a->left !=NULL) q.push(a->left);
                if(a->right !=NULL) q.push(a->right);
                level.push_back(a->val);
                
            }
            ans.push_back(level);
        }
        return ans;
    }
};
