#pragma region Instructions
// 2. Add Two Numbers

// You are given two non-empty linked lists representing two non-negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Constraints:

//  The number of nodes in each linked list is in the range [1, 100].
//  0 <= Node.val <= 9
//  It is guaranteed that the list represents a number that does not have leading zeros.
#pragma endregion

#include <iostream>

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

    }
};

int main()
{
    Solution s;

    

    return 0;
}