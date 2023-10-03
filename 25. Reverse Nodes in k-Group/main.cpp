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
    ListNode* reverseKGroup(ListNode* head, int k) {
        reverseList(head,k,len(head));
        return head;
    }
    
    void reverseList(ListNode * head,int k,int n){
        if(n < k){
            return;
        }
        vector<int> arr(k);
        ListNode * temp = head;
        for(int i = 0; i < k ; i++){
            arr[i] = temp->val;
            temp = temp->next;
        }
        temp = head;
        for(int i = k-1; i >= 0 ; i--){
            temp->val = arr[i];
            temp = temp->next;
        }
        reverseList(temp,k,n-k);
    }
    
    int len(ListNode * head){
        int c = 0;
        while(head){
            c++;
            head = head->next;
        }
        return c;
    }
};