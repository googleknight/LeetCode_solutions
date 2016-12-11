//https://leetcode.com/problems/remove-linked-list-elements
/** * Definition for singly-linked list. * struct ListNode {
 *

 int val;
*

 ListNode *next;
*

 ListNode(int x)
:
val(x), next(NULL)
{
}
* };
*/class Solution
{
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* prev=NULL;
        ListNode* cur=head;
        if(cur==NULL)
            return NULL;
        while(cur!=NULL)
        {

            if(cur->val==val)
            {
                if(cur==head)
                    head=cur->next;
                else prev->next=cur->next;
            }
            else prev=cur;
            cur=cur->next;
        }
        return head;
    }
};