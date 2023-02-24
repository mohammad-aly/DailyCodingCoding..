/*\

Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
Note: A leaf is a node with no children.

check sometimes there will be no children after the main root node it shouldn't be minimum
make 1+rh if left have no roots and 1+lh if right have no roots 
if no on both sides return 1

*/

#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)

class Solution {
public:
    int minDepth(TreeNode* root) {

        if(root == nullptr){
            return 0;
        }

        int lh = minDepth(root->left);
        int rh = minDepth(root->right);

        if(root->left == nullptr && root->right == nullptr){
            return 1;
        }

        if(root->left == nullptr){
            return 1+rh;
        }

        if(root->right == nullptr){
            return 1+lh;
        }

        return 1+min(lh,rh);
    }
};