/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 void insertNode(ListNode** head, ListNode* node){
     ListNode* current=*head;
     if(current==NULL || current->val >= node->val){
         node->next= current;
         *head= node;
         return;
     }
     while(current->next !=NULL && current->next->val < node->val){
         current= current->next;
     }
     node->next= current->next;
     current->next= node;
     return;
 }
 
 
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* current=A;
    ListNode* sorted=NULL;
    ListNode* agla=NULL;
    while(current!=NULL){
        agla= current->next;
        insertNode(&sorted, current);
        current= agla;
    }
    return sorted;
}
