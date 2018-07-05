/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(B==1) return A;
    if(A==NULL) return A;
    
    ListNode* prev=NULL;
    ListNode* temp=A;
    ListNode* agla= temp->next;
    ListNode* head=NULL;
    ListNode* start=NULL;
    ListNode* store=NULL;
    int k=1, count=0;
    while(temp!=NULL){
        while(k <= B){
            if(k==1)start=temp;
            
            temp->next= prev;
            prev=temp;
            temp=agla;
            if(agla!=NULL)agla=agla->next;
            else agla=NULL;
            k++;
        }
        if(count==0){
            head=prev;
        }
        
        if(count!= 0) store->next= prev;
        k=1;
        count++;
        store=start;
        prev=NULL;
    }
    return head;
}
