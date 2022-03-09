/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode *getStartPoint(ListNode *head,ListNode *slow ) {
        
        while(head!=slow)
        
        {
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow== fast) return getStartPoint(head,slow);
            
        }
        
        return NULL;
    }
};