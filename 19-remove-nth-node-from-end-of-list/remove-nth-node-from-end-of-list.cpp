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

        // Optimal Approach -> by reaching before the node to be deleting
        // using slow and fast pointer

        ListNode* fast = head;
        for(int i=0; i<n; i++){
            fast = fast -> next;
        }

        if(fast == NULL){
            ListNode* newHead = head -> next;
            delete head;
            return newHead;

        }
        ListNode* slow = head;
        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }

        ListNode* delNode = slow -> next;
        slow -> next = slow -> next -> next;
        delete delNode;
        return head;
        
        // Brute force  -> T.C = O(2 * len) and S.C = O(1)

        // int cnt = 0;
        // ListNode* temp = head;
        // // count number of node in our LL
        // while(temp != NULL){
        //     cnt++;
        //     temp = temp -> next;

        // }
        // // if size == N , delete nth node from last -> means delete head
        // if(cnt == n){
        //     ListNode* newHead = head -> next;
        //     delete head;
        //     return newHead;
        // }

        // // reach before the node which is to be deleted
        // int res = cnt - n;
        // temp = head;
        // while(temp != NULL){
        //     res--;

        //     if(res == 0){
        //         break;
        //     }
        //     temp = temp -> next;
        // }
        // ListNode* delNode = temp -> next;
        // temp -> next = temp -> next -> next;
        // delete delNode;
        // return head;
    }
};