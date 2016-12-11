//https://leetcode.com/problems/add-two-numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *start= NULL;
        ListNode *prev= NULL ;
        int prevint=0;
        while(l1!=NULL || l2!=NULL ||prevint!=0)
        {
            int num1=0,num2=0;
            if(l1!=NULL)
            {
                num1=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                num2=l2->val;
                l2=l2->next;
            }
            int val=num1+num2+prevint;
            prevint=val/10;
            ListNode *node=new ListNode(val%10);
            node->next=NULL;
            if(start==NULL)
            {
                start=node;
                prev=node;
            }
            else
            {
                prev->next=node;
                prev=prev->next;
            }
        }
        return start;
    }
};