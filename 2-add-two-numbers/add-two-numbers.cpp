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
        ListNode* dummynode=new ListNode();
        int carry=0;
        ListNode* temp=dummynode;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
            }
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            sum+=carry;
            ListNode* curr=new ListNode(sum%10);
            carry=sum/10;
            temp->next=curr;
            temp=temp->next;
        }
        return dummynode->next;
    }
};