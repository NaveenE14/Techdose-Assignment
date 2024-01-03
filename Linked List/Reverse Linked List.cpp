class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *c=head;
        ListNode *p=NULL;
        while(c){
            ListNode *n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
};
