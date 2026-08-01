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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // Brute force approach
        int cnt = 0;
        ListNode* temp = head;
        // count number of node in our LL
        while(temp != NULL){
            cnt++;
            temp = temp -> next;

        }
        // if size == N , delete nth node from last -> means delete head
        if(cnt == n){
            ListNode* newHead = head -> next;
            delete head;
            return newHead;
        }

        // reach before the node which is to be deleted
        int res = cnt - n;
        temp = head;
        while(temp != NULL){
            res--;

            if(res == 0){
                break;
            }
            temp = temp -> next;
        }
        ListNode* delNode = temp -> next;
        temp -> next = temp -> next -> next;
        delete delNode;
        return head;
    }
};