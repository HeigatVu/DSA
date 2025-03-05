/*
Implement merge two sorted list.
By Duc
Feb 26, 2025
*/

/*
Input: two lists sorted in ascending order.
Output: the head of the merged linked list.
Constraints: The number of nodes in both lists is in the range [0, 50]
              -100 <= Node.val <= 100
              Both list1 and list2 are soted in ascending order.
*/

#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

class Solution {

  // Definition for singly-linked list.
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode output(0);
    ListNode *current = &output;

    while (list1 && list2) {
      if (list1->val < list2->val) {
        current->next = list1;
        list1 = list1->next;
      } else {
        current->next = list2;
        list2 = list2->next;
      }
      current = current->next;
    }
    return output.next;
  }
};
