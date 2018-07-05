/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* init=A;
    ListNode* last=A;
    if(B== C) return A;
    if(A==NULL) return A;
    if(A->next == NULL) return A;
    int b=B;
    while(--B>1){
        init=init->next;
    }
    while(C-- >0){
        last= last->next;
    }
    
    ListNode* temp;
    if(b==1){
        temp=init;
        init=NULL;
    }else{
        temp=init->next;
        init->next=NULL;
    }
    
    ListNode* naya=temp;
    ListNode* prev=NULL;
    ListNode* agla= temp->next;
    while(temp != last){
        temp->next= prev;
        prev= temp;
        temp= agla;
        if(agla== NULL)agla=NULL;
        else agla= agla->next;
    }
    
    if(b==1){
        naya->next=last;
        return prev;
    }else{
        init->next= prev;
        naya->next= last;
        return A;
    }
    
}
