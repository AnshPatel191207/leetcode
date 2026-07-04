// Last updated: 04/07/2026, 19:23:12
1class Solution {
2public:
3    int rangeSumBST(TreeNode* root, int low, int high) {
4        
5        if (root == nullptr) {
6            return 0;
7        }
8        
9        if (root->val > high) {
10            return rangeSumBST(root->left, low, high);
11        }
12        
13        if (root->val < low) {
14            return rangeSumBST(root->right, low, high);
15        }
16        
17        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
18    }
19};