class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode* head=NULL;
        if(l1->val>=l2->val)
        {
            head=l2;
            l2=l2->next;
        }
        else
        {
            head=l1;
            l1=l1->next;
        }
        ListNode* ans=head;
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val>=l2->val)
            {
                head->next=l2;
                l2=l2->next;
                head=head->next;
            }
            else
            {
                head->next=l1;
                l1=l1->next;
                head=head->next;
            }
        }
        while(l1!=NULL)
        {
            head->next=l1;
            l1=l1->next;
            head=head->next;
        }
        while(l2!=NULL)
        {
            head->next=l2;
            l2=l2->next;
            head=head->next;
        }
        return ans;
    }
};