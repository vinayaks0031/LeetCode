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
        
        ListNode dummy(0);
        ListNode* pPtr=head;
        int cnt=1;
        ListNode* tmp=&dummy;

        while( head != NULL )
        {
            head=head->next;
            if( head==NULL  || (head!=NULL && pPtr->val != head->val) )
            {
                if(cnt == 1)
                {
                    tmp->next=pPtr;
                    tmp=tmp->next;
                }
                cnt=1;
                pPtr=head;
            }
            else
            {
                cnt++;
            }
        }
        
        tmp->next=NULL;
        return dummy.next;
    }
};