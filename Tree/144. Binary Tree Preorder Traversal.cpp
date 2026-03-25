/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <cstddef>
#include <vector>
using namespace std;
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
class Solution {
public:
  vector<int> ans;
  void preOrder(TreeNode *root) {
    // base case
    if (root == nullptr)
      return;

    // preOrder
    // visiting the roots
    ans.push_back(root->val);
    preOrder(root->left);  // visiting left subtree
    preOrder(root->right); // visiting right subtree
  }

  vector<int> preorderTraversal(TreeNode *root) {
    preOrder(root);
    return ans;
  }
};