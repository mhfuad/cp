#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* pre;
        ListNode* post = nullptr;
        while(head != nullptr) {
            
            if(head->val == left) {
                break;
            }
            cout << head->val << endl;
            pre->next = new ListNode(head->val);
            head = head->next;
        }
        return head;
    }
};

int main(){
    //1,2,3,4,5
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* result = s.reverseBetween(head, 2, 4);
    // while(result != nullptr){
    //     cout << result->val << " ";
    //     result = result->next;
    // }
    // cout << endl;
    return 0;
}