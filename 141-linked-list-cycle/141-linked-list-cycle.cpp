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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> umap;
        
        if(head==NULL) return false;
        else umap[head]++;
        head=head->next;
        
        while(head!=NULL)
        {
            if(umap.find(head)!=umap.end()) return true;
            else umap[head]++;
            head=head->next;
        }
        
        return false;
    }
};