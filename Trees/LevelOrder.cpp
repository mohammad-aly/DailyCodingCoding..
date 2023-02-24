/*
    approach
    ---------
    1)use queue
        i) first insert the root in the queue 
        ii) in while loop untill the queue become empty take the size of the queue and traverse 
        that root's left and right children using for loop with size 
        ii) in for loop store that root node in another root variable then pop it from queue
        now check if root->left is null if not push that node into queue same with root->right
        iii) now push that root->val int the level vector
        and after coming out from for loop store it in ans vectored 

*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->val);
            }

            ans.push_back(level);

        }

        return ans;

    }
};