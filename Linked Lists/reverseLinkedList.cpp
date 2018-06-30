/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    if(A->next== NULL) return A;
    ListNode* curr= A->next;
    ListNode* temp=curr->next;
    A->next= NULL;
    while(curr != NULL){
        curr->next=A;
        A= curr;
        curr= temp;
        if(temp != NULL)
            temp= temp->next;
        else
            temp= NULL;
    }
    
    return A;
}
