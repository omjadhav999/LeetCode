/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void help(TreeNode* root, int &cnt, int &mini){
        if(root == NULL) return;
        int k=mini+1;
        help(root->left, cnt, k);
        if(root->left==NULL && root->right==NULL) cnt = min(cnt, mini+1);
        help(root->right, cnt, k);
    }

    int minDepth(TreeNode* root) {
        int cnt=INT_MAX, mini=0;
        help(root, cnt, mini);
        if(cnt == INT_MAX) return 0;

    return cnt;
    }
};