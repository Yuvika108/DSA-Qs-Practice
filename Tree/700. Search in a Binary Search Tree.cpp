// Definition for a binary tree node.
#include <cstddef>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
class Solution {
public:
  TreeNode *searchBST(TreeNode *root, int val) {
    int target = val;

    if (root == nullptr)
      return nullptr;
    TreeNode *curr = root;

    while (curr != nullptr) {
      if (target < curr->val)
        curr = curr->left;
      else if (target > curr->val)
        curr = curr->right;
      else
        return curr;
    }

    return nullptr;
  }
};