/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* tempA=A;
    ListNode* tempB= B;
    ListNode* faltu=NULL;
    ListNode* prev=A;
    if(A->val < B->val){
        faltu= tempA->next;
        tempA->next= tempB;
        prev=tempA;
        tempA= faltu;
    }
    else{
        faltu= tempB->next;
        tempB->next= tempA;
        prev= tempB;
        tempB= faltu;
    }
    
    while(tempA!= NULL && tempB != NULL){
        if(tempA->val < tempB->val){
            faltu= tempA->next;
            tempA->next= tempB;
            prev->next= tempA;
            prev=tempA;
            tempA= faltu;
        }else{
            faltu= tempB->next;
            tempB->next= tempA;
            prev->next= tempB;
            prev= tempB;
            tempB= faltu;
        }
    }
    if(A->val < B->val) return A;
    else return B;
}
