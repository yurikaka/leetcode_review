//2. Add Two Numbers
//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//
//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    /* For two integers stored in linked list, we can add them digit by digit from low to high and use an integer to
     * store the carry. When we reach the end of one list, we can just attach the rest part of another list to the result.
     * If the carry is 1 when we reach the end again, add a new list node with value 1 to the end.
     */
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode *h = new ListNode(0), *cur = h;
        while (l1 && l2){
            cur->next = new ListNode((l1->val+l2->val+c)%10);
            c = (l1->val+l2->val+c)/10;
            l1 = l1->next;
            l2 = l2->next;
            cur = cur->next;
        }
        cur->next = l1?l1:l2;
        while (cur->next && c){
            cur = cur->next;
            cur->val += c;
            c = cur->val/10;
            cur->val %= 10;
        }
        if (c)
            cur->next = new ListNode(1);
        return h->next;
    }
};

int main() {

    return 0;
}