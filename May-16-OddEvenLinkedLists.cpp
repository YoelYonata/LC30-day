/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL){
            return head;
        }
        ListNode *oddList = head;
        ListNode *evenList = head -> next;
        ListNode *evenListhead = head ->next;
        while(evenList && evenList-> next){
            oddList -> next = oddList -> next -> next;
            evenList -> next = evenList -> next -> next;
            oddList = oddList ->next;
            evenList = evenList ->next;
        }
        oddList -> next = evenListhead;
        return head;
        
    }
};