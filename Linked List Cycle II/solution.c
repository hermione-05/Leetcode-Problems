struct ListNode * hasCycle(struct ListNode *head) {
    if(!head) return NULL;
    struct ListNode *slow=head, *fast=head;
    
    do{
        if(fast->next==NULL || fast->next->next==NULL) return NULL;
        
        slow=slow->next;
        fast=fast->next->next;

    }while(fast!=slow);
    return slow;
}

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow=hasCycle(head);
    if(slow){
        while(head!=slow){
            slow=slow->next;
            head=head->next;
        }
    }
    return slow;
}