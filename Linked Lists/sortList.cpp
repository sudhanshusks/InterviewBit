/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode* merge(ListNode* A, ListNode* B){
    if(A == NULL){
        return B;
    }
    if(B == NULL){
        return A;
    }
    
    ListNode* head = NULL;
    
    if(A->val < B->val){
        head = A;
        A = A->next;
    }
    else{
        head = B;
        B = B->next;
    }
    
    ListNode* temp = head;
    
    while(A != NULL && B != NULL){
        if(A->val < B->val){
            temp->next = A;
            A = A->next;
        }
        else{
            temp->next = B;
            B = B->next;
        }
        temp = temp->next;
    }
    
    if(A != NULL){
        temp->next = A;
    }
    else{
        temp->next = B;
    }
    
    return head;
} 
 
 ListNode *mergeSort(ListNode *head) {
    if(!head || !head->next) return head;
    // get middle node
    // not right if write: *fast = head. Otherwise, {2,1} will not be sorted.
    ListNode *slow = head, *fast = head->next; 
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *left = head, *right = slow->next;
    slow->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    return merge(left, right);
}


 
ListNode* Solution::sortList(ListNode* A) {
    A= mergeSort(A);
    return A;
}
