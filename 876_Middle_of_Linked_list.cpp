// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         // fast 2 steps, slow 1 step
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // slow is now at middle (second middle if even length)
//         return slow;
//     }
// };
