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
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        TreeNode* newNode = new TreeNode(val);

        if (root == NULL)
            return newNode;

        TreeNode* curr = root;

        while (curr != NULL) {

            if (val < curr->val) {

                if (curr->left != NULL) {
                    curr = curr->left;
                }
                else {
                    curr->left = newNode;
                    break;
                }

            }
            else {

                if (curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    curr->right = newNode;
                    break;
                }

            }
        }

        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna