class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        unordered_map<Node*, Node*> mp;

        // Step 1: Create all nodes
        Node* curr = head;
        while (curr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Step 2: Assign next and random pointers
        curr = head;
        while (curr) {
            mp[curr]->next = mp[curr->next];      // safe even if NULL
            mp[curr]->random = mp[curr->random];  // safe even if NULL
            curr = curr->next;
        }

        return mp[head];
    }
};
