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
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        ListNode* temp=head;
        ListNode* inser=head;
        int ans=0;
        
        
        while(temp!=NULL){
            if(temp->val!=0){
                ans+=temp->val;
            }
            else{
                inser->val=ans;
                if(temp->next==NULL) inser->next=NULL;
                else inser=inser->next;
                ans=0;
            }
            temp=temp->next;
        }
        
        return head;
    }
};