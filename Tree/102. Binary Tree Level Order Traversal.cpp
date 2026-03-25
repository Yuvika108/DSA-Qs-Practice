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
#include <queue>
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> ans;

    if (root == nullptr)
      return ans;
    queue<TreeNode *> q;

    q.push(root);
    ans.push_back({root->val});

    while (!q.empty()) {
      int sz = q.size();
      vector<int> level;

      while (sz--) {
        TreeNode *f = q.front();
        q.pop();

        if (f->left != nullptr) {
          q.push(f->left);
          level.push_back(f->left->val);
        }
        if (f->right != nullptr) {
          q.push(f->right);
          level.push_back(f->right->val);
        }
      }

      if (level.size() > 0)
        ans.push_back(level);
    }

    return ans;
  }
};