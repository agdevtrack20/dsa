// Finding the Nth Node from the End of a Linked List

// The optimal approach uses two pointers.

// Idea
// Move fast pointer n steps ahead.
// Start slow from head.
// Move both pointers one step at a time.
// When fast reaches the end, slow will be at the nth node from the end.

ListNode* nthFromEnd(ListNode* head, int n) {
    ListNode* slow = head;
    ListNode* fast = head;

    // Move fast n steps ahead
    for (int i = 0; i < n; i++) {
        if (fast == nullptr) {
            return nullptr; // n > length
        }
        fast = fast->next;
    }

    // Move both pointers
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

// Removing the Nth Node from the End (LeetCode 19)

// A dummy node makes edge cases easy (e.g., deleting the head).


ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy(0);
    dummy.next = head;

    ListNode* slow = &dummy;
    ListNode* fast = &dummy;

    // Move fast n+1 steps
    for (int i = 0; i <= n; i++) {
        fast = fast->next;
    }

    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return dummy.next;
}




