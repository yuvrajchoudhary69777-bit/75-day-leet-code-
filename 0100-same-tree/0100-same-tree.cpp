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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Dono NULL hain
        if (p == NULL && q == NULL)
            return true;

        // Ek NULL hai, doosra nahi
        if (p == NULL || q == NULL)
            return false;

        // Values different hain
        if (p->val != q->val)
            return false;

        // Left aur right subtree compare karo
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna