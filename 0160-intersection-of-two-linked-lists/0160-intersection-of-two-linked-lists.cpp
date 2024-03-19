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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode *ptr = headA;
        ListNode *ptr2 = headB;
        while(ptr != ptr2){
            ptr = ptr ? ptr->next : headB;
            ptr2 = ptr2 ? ptr2->next : headA;
        }
        return ptr2;
//         set<ListNode*> s1;
//         while(ptr)
//         {
//             s1.insert(ptr);
//             ptr = ptr->next;
            
//         }
//         while(ptr2){
//             if(s1.find(ptr2) != s1.end()) return ptr2;
            
//             ptr2 = ptr2->next;
//         }
        return NULL;
    }
};