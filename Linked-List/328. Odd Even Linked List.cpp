// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
  ListNode *oddEvenList(ListNode *head) {
    int count = 0;

    if (head == nullptr || head->next == nullptr)
      return head;

    ListNode *temp_odd = head;
    ListNode *temp_even = head->next;
    ListNode *evenHead = temp_even;

    while (temp_even != nullptr && temp_even->next != nullptr) {
      temp_odd->next = temp_even->next;
      temp_odd = temp_odd->next;

      temp_even->next = temp_odd->next;
      temp_even = temp_even->next;
    }

    temp_odd->next = evenHead;
    return head;
  }
};
