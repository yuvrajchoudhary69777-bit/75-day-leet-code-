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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,
                    int inStart, int inEnd, int& postIndex) {

        if (inStart > inEnd)
            return NULL;

        int rootVal = postorder[postIndex--];

        TreeNode* root = new TreeNode(rootVal);

        int pos = inStart;
        while (inorder[pos] != rootVal)
            pos++;

        root->right = build(inorder, postorder, pos + 1, inEnd, postIndex);
        root->left = build(inorder, postorder, inStart, pos - 1, postIndex);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size() - 1;

        return build(inorder, postorder, 0,
                     inorder.size() - 1, postIndex);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna