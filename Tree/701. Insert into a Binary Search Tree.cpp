// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

#include <cstddef>

class Solution {
public:
  TreeNode *insertIntoBST(TreeNode *root, int val) {
    int target = val;
    TreeNode *newNode = new TreeNode(val);

    if (root == nullptr)
      return newNode;

    TreeNode *curr = root;

    while (curr != nullptr) {
      if (target < curr->val) {
        if (curr->left != nullptr) {
          curr = curr->left;
        } else {
          curr->left = newNode;
          break;
        }
      } else {
        if (curr->right != nullptr) {
          curr = curr->right;
        } else {
          curr->right = newNode;
          break;
        }
      }
    }
    return root;
  }
};