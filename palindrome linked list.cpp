//https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head)
    {
        vector<int> stack;
        ListNode *fast=head;
        if(head==NULL)
            return true;
        else if(head->next==NULL)
            return true;
        else while(head!=NULL)
            {
                if(fast!=NULL)
                {
                    stack.push_back(head->val);
                    fast=fast->next;
                    if(fast!=NULL)
                        fast=fast->next;
                    else stack.pop_back();
                }
                else
                {
                    int temp=stack.back();
                    stack.pop_back();
                    if(head->val!=temp)
                        return false;
                }
                head=head->next;
            }
        return true;
    }
};