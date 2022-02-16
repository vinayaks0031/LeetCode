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
    ListNode* swapPairs(ListNode* head) {
        int count=1;
        ListNode* ans=head;
        while(head!=NULL)
        {
            if(count%2==1 && head->next!=NULL){
                int first=head->val;
                int second=head->next->val;

                head->val=second;
                head->next->val=first;
            }
            head=head->next;
            count++;
        }
        return ans;
    }
};