class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright=1;
        while(!q.empty()){
            int n=q.size();
            vector<int>zigzag(n);
            for(int i=0; i<n; i++){
                TreeNode* a=q.front();
                q.pop();
                int index=(lefttoright)?i:n-i-1;
                zigzag[index] = a->val;
                if(a->left!= NULL) q.push(a->left);
                if(a->right!=NULL ) q.push(a->right); 

            }
            lefttoright= !lefttoright;
            ans.push_back(zigzag);
        }
        return ans;
    }
};
