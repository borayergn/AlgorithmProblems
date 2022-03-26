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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* iterator1 = list1;
        ListNode* iterator2 = list2;
          
        if(list1 == nullptr && list2 == nullptr){
           ListNode * head = nullptr;
           return head; 
        }
        else if(list1 == nullptr && list2 != nullptr){
            ListNode * head = list2;
            return head;
        }
        else if(list1 != nullptr && list2 == nullptr){
            ListNode * head = list1;
            return head;
        }
        
        ListNode * p = iterator1;
        int lastVal;
                
        while(iterator1->next != nullptr){
            iterator1 = iterator1->next;
        }
        
        iterator1->next = list2;
        ListNode * temp = new ListNode;
        
        for(ListNode * i = list1 ; i != nullptr ; i = i->next){
            for(ListNode * j = list1 ; j->next != nullptr ; j = j->next){                
                if(j->val > j->next->val){
                    temp->val = j->val;
                    j->val = j->next->val;
                    j->next->val = temp->val;
                }             
            }
        }
        
        ListNode * head = list1;
        
        return head; 
         
    }      
};