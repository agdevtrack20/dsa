// Detecting a Cycle in a Linked List (Floyd's Cycle Detection Algorithm)

// Use two pointers:

// Slow → moves 1 step at a time.
// Fast → moves 2 steps at a time.

// If there is a cycle, the fast pointer will eventually meet the slow pointer.

bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          // move 1 step
        fast = fast->next->next;    // move 2 steps

        if (slow == fast) {
            return true;            // cycle found
        }
    }

    return false;                   // reached end, no cycle
}