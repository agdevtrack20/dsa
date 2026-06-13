void deleteNode(ListNode*& head, int key) {
    if (head == nullptr) return;

    if (head->val == key) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    ListNode* curr = head;

    while (curr->next != nullptr && curr->next->val != key) {
        curr = curr->next;
    }

    if (curr->next != nullptr) {
        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
}

// Finding the Starting Node of the Cycle

// After detecting a cycle:

// Keep slow where it met fast.
// Move another pointer ptr to head.
// Move both one step at a time.
// The node where they meet is the start of the cycle.

// Complexity
// Time: O(n)
// Space: O(1)

ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            ListNode* ptr = head;

            while (ptr != slow) {
                ptr = ptr->next;
                slow = slow->next;
            }

            return ptr;  // start of cycle
        }
    }

    return nullptr;
}



