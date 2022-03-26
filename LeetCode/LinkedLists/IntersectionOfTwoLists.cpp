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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        ListNode * iterator1 = headA;
        ListNode * iterator2 = headB;
        ListNode * intersectPoint = NULL;
        
        if (headA == NULL || headB == NULL){
            return intersectPoint;
        }
        if(headA == headB){
            intersectPoint = headA;
            return intersectPoint;
        }
        
        int counterA = 0;
        int counterB = 0;
        
        while(true){
            if(iterator1 == NULL){
                iterator1 = headB;
                counterA++;
            }
            else{
                iterator1 = iterator1->next;
            }
             if(iterator2 == NULL){
                iterator2 = headA;
                counterB++;
            }
            else{
                iterator2 = iterator2->next;
            }
            
            if(iterator1 == iterator2){
                intersectPoint = iterator1;
                return intersectPoint;
            }
            
            if(counterA > 1 || counterB >1){
                break;
            }
        }
        return intersectPoint;
        
    }
};