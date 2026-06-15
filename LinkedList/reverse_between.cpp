// Approach: Reverse only the required portion
// Move to the node just before position left.
// Reverse nodes from left to right.
// Connect the reversed portion back to the list.


ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right)
        return head;

    ListNode dummy(0);
    dummy.next = head;

    ListNode* prev = &dummy;

    // Move prev to node before 'left'
    for (int i = 1; i < left; i++) {
        prev = prev->next;
    }

    ListNode* curr = prev->next;

    // Reverse nodes between left and right
    for (int i = 0; i < right - left; i++) {
        ListNode* temp = curr->next;

        curr->next = temp->next;
        temp->next = prev->next;
        prev->next = temp;
    }

    return dummy.next;
}