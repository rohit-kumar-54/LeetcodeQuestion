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
    ListNode *reverseList(ListNode* head){
        if(head == NULL || head -> next == NULL) return head;

        ListNode* newHead = reverseList(head -> next);
        ListNode* front = head -> next;
        front -> next = head;
        head -> next = NULL;
        return newHead;


        // ListNode *curr = head;
        // ListNode *prev = NULL;
        // while(curr != NULL){
        //     ListNode *next = curr -> next;
        //     curr -> next = prev;
        //     prev = curr;
        //     curr = next;
        // } 
        // return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL && head -> next == NULL) return true;

        // find Middle node to reverse 2nd half part
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }// here we find middle or 2nd middle node at slow -> next;

        // reverse 2nd half
        ListNode* newHead = reverseList(slow -> next);
        ListNode* first = head;
        ListNode* second = newHead;

        while(second != NULL){
            if(first -> val != second -> val){
                reverseList(newHead);
                return false;
            }
            first  = first -> next;
            second = second -> next;
        }
        reverseList(newHead);
        return true;

        // if(head == NULL) return true;
        // ListNode  *slow = head , *fast = head;
        // while(fast->next != NULL && fast->next->next != NULL){
        //     slow = slow -> next;
        //     fast = fast -> next -> next;
        // }
        // ListNode *rev = reverseList(slow->next);
        // ListNode *curr = head;
        // while(rev != NULL){
        //     if(rev -> val != curr -> val){
        //         return false;
        //     }
        //     rev = rev -> next;
        //     curr = curr -> next;
        // }
        // return true;
    }
};