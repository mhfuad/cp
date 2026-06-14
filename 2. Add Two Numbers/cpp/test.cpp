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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res;
        while(l1 != nullptr && l2 != nullptr) {
            //cout << l1->val << " " << l2->val << endl;
            if(l1->val + l2->val < 10){
                res->next = new ListNode(l1->val + l2->val);
            }else{
                res->next = new ListNode((l1->val + l2->val) % 10);
                if(l1->next != nullptr){
                    l1->next->val += 1;
                }else {
                    l1->next = new ListNode(1);
                }
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return res;
    }
};

int main(){
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution sol;
    ListNode *result = sol.addTwoNumbers(l1, l2);
    while(result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}