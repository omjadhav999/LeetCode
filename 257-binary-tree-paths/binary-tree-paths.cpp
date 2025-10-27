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
    void findPath(TreeNode* root, vector<string>& res, string temp){
        temp = temp + to_string(root->val);
        if(root->left) findPath(root->left, res, temp+"->");
        if(root->right) findPath(root->right, res, temp+"->");
        if(!root->left && !root->right) res.push_back(temp);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root) findPath(root, res, "");

    return res;
    }
};