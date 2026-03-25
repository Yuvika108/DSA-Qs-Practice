#include <algorithm>
#include <vector>

/**
 * Definition for singly-linked list.
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *sortList(ListNode *head) {
    if (head == nullptr)
      return nullptr;

    std::vector<int> v;
    ListNode *temp = head;

    while (temp != nullptr) {
      v.push_back(temp->val);
      temp = temp->next;
    }

    std::sort(v.begin(), v.end());

    ListNode *newHead = new ListNode(v[0]);
    temp = newHead;

    for (size_t i = 1; i < v.size(); i++) {
      temp->next = new ListNode(v[i]);
      temp = temp->next;
    }

    return newHead;
  }
};
