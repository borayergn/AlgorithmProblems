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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * it = head;
        
        if(head == nullptr){
            return head;
        }
            
        while(it->next != nullptr){
            while(it->val == it->next->val){
                if(it->next->next == nullptr){
                    it->next = nullptr;
                    break;
                }
                ListNode * toBeDeleted = it->next;
                ListNode * ptr1 = it->next->next;
                it->next = ptr1;   
                
            }
                
            if(it->next == nullptr){
                break;
            }    
              
            it = it->next;
        }
        return head;
    }
};