/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* prev=A;
    ListNode* curr= A->next;
    while(curr != NULL){
        if(curr->val == prev->val){
            prev->next= curr->next;
            curr= prev->next;
        }else{
            prev=curr;
            curr= curr->next;
        }
    }
    return A;
}
