#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

int main() {
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);

    ListNode* curr = head;

    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    return 0;
}