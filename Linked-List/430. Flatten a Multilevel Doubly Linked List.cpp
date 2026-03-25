class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;

        Node* curr = head;

        while (curr) {
            if (curr->child) {
                Node* next = curr->next;

                // Flatten the child list
                Node* childHead = flatten(curr->child);

                // Attach child
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                // Move to tail of child list
                Node* temp = childHead;
                while (temp->next) {
                    temp = temp->next;
                }

                // Attach the original next
                if (next) {
                    temp->next = next;
                    next->prev = temp;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};
