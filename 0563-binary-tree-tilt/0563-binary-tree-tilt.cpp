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
    int sum=0;
    int findSum(TreeNode* root){
        if(root!=nullptr){
            int l=0,r=0;
            l+=findSum(root->left);
            r+=findSum(root->right);
            sum+=std::abs(l-r);
            return root->val+l+r;
        }
        return 0;
    }
public:
    int findTilt(TreeNode* root) {
        sum=0;
        findSum(root);
        return sum;
    }
};