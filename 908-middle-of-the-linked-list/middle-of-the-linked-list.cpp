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
    ListNode* middleNode(ListNode* head) {

        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }
        int middleElements = (cnt/2)+1;

        temp = head;
        while(temp != NULL){
            middleElements = middleElements - 1;
            if(middleElements == 0){
                break;
            }
            temp  = temp -> next;
        }
        return temp;
        













        // if(head == NULL) return NULL;
        // ListNode *slow = head , *fast = head;
        // while(fast != NULL && fast->next != NULL){
        //     slow = slow->next ;
        //     fast = fast -> next -> next;
        // }
        // return slow;
    }
};