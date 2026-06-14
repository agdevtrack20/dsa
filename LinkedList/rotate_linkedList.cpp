// Find the length n of the list.

// Rotating by n places gives the same list.

// k = k % n;
// Connect the tail to the head to form a circular list.

// The new tail will be at position:

// n - k - 1
// The node after the new tail becomes the new head.
// Break the circle.


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int n = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            n++;
        }

        k %= n;

        if (k == 0)
            return head;

        // Make circular
        tail->next = head;

        int steps = n - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};