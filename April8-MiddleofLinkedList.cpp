/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* pointStart = head;
        ListNode* pointEnd = head;
        int count = 0;
        while(pointEnd!=NULL){
            pointEnd = pointEnd -> next;
            count++;
        }
        for (int i = 0; i<count/2; i++){
            pointStart = pointStart->next;
        }
        return pointStart;
    }
};