/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* head=NULL; 
 
void reverse(ListNode* pichla, ListNode* curr, ListNode* agla){
    if(agla==NULL){
        curr->next= pichla;
        head=curr;
        return;
    }
    
    curr->next= pichla;
    pichla=curr;
    curr=agla;
    agla=agla->next;
    reverse(pichla, curr, agla);
}
 
ListNode* Solution::reverseList(ListNode* A) {
    if(A==NULL || A->next==NULL) return A;
    
    ListNode* pichla=A;
    ListNode* curr=A->next;
    ListNode* agla= curr->next;
    reverse(pichla, curr, agla);
    A->next= NULL;
    return head;
}
