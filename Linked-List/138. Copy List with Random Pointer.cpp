#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node {
public:
  int val;
  Node *next;
  Node *random;

  Node(int _val) {
    val = _val;
    next = nullptr;
    random = nullptr;
  }
};

class Solution {
public:
  Node *copyRandomList(Node *head) {
    if (!head)
      return nullptr;

    unordered_map<Node *, Node *> mp;

    // Step 1: Create all nodes
    Node *curr = head;
    while (curr) {
      mp[curr] = new Node(curr->val);
      curr = curr->next;
    }

    // Step 2: Assign next and random pointers
    curr = head;
    while (curr) {
      mp[curr]->next = mp[curr->next];     // safe even if nullptr
      mp[curr]->random = mp[curr->random]; // safe even if nullptr
      curr = curr->next;
    }

    return mp[head];
  }
};
