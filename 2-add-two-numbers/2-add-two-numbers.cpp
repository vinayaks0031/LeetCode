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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0;
        ListNode dummy(0);
        ListNode* temp=&dummy;
        
        while(l1!=NULL || l2!=NULL || carry==1)
        {
            int tmp=0;
            if(l1!=NULL && l2!=NULL) 
            {
                tmp = l1->val + l2->val + carry;
                l1->val=tmp%10;
                temp->next=l1;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1!=NULL)
            {
                tmp = l1->val + carry;
                l1->val=tmp%10;
                temp->next=l1;
                l1=l1->next;
            }
            else if(l2!=NULL)
            {
                tmp = l2->val + carry;
                l2->val=tmp%10;
                temp->next=l2;
                l2=l2->next;
            }
            else
            {
                temp->next= new ListNode(carry);
                carry=0;
            }
            carry= tmp/10;
            temp=temp->next;
        }
        
        return dummy.next;
    }
};