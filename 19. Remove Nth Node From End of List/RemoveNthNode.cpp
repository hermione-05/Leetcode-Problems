#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode* temp = head;
        for (int i = 1; i <= n; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            return head->next;
        }

        ListNode* extra = head;
        while (temp->next != nullptr) {
            temp = temp->next;
            extra = extra->next;
        }

        extra->next = extra->next->next;
        return head;
    }
};

int main() {
    Solution solution;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    int n, val;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> val;
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int removeN;
    std::cout << "Enter the position to remove from the end: ";
    std::cin >> removeN;

    head = solution.removeNthFromEnd(head, removeN);

    std::cout << "Resulting linked list: ";
    ListNode* current = head;
    while (current) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;

    return 0;
}
