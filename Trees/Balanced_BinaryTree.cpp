/*
    we can do it using brute force but it takes O(N) * O(N) = O(N^2)

    optimized approach:
    --------------------
    1)every time we calculating the height on left and right we also check if leftheight == -1 and rightheight == -1
    if that happens return -1;
    2)and check if(abs(lh-rh) > 1) return -1;

*/

//bruteforce approach
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)


class Solution {
public:

    int height(TreeNode* root){

        if(root == NULL){
            return 0;
        }

        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh,rh)+1;

    }

    bool isBalanced(TreeNode* root) {
        
        if(root ==  NULL){
            return true;
        }

        int lh = height(root->left);
        int rh = height(root->right);

        // checking balanced by checking on both sides with true value
        if(abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)) return true;

        return false;
    }
};



//optimized approach
class Solution {
public:

    int height(TreeNode* root){
        if(root ==  NULL){
            return 0;
        }

        int lh = height(root->left);
        if(lh == -1) return -1;
        int rh = height(root->right);
        if(rh == -1) return -1;

        if(abs(lh - rh) > 1) return -1;
        return max(lh,rh)+1;
    }


    bool isBalanced(TreeNode* root) {
        
        return height(root) != -1;
    }
};