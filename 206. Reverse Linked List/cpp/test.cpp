#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        auto currentNode = head;
        while (currentNode != nullptr) {
            auto nextNode = currentNode->next;
            currentNode->next = prev;
            prev = currentNode;
            currentNode = nextNode;
        }
        return prev;
    }
};

int main() {
    // Create a simple linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    head = sol.reverseList(head);

    // Print the reversed list
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }

    return 0;
}