/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* temp=A;
    ListNode node=ListNode(1);
    ListNode* thead=&node;
    ListNode* naya=thead;
    ListNode* prev=NULL;
    ListNode* piche=NULL;
    ListNode* abhi=NULL;
    int flag=0, count=0;
    while(temp != NULL){
        if(temp->val >= B){
            flag=-1;
            if(count==0){
                piche= prev;
                abhi=temp;
                count++;
            }
        }
        else if(flag==-1){
            if(temp->val < B){
                naya->next= temp;
                prev->next= temp->next;
                temp=prev;
                naya= naya->next;
                naya->next=NULL;
                
            }
        }
        prev=temp;
        temp= temp->next;
    }
    
    temp=thead;
    if(piche != NULL){
        while(temp->next != NULL){
            temp= temp->next;
            piche->next= temp;
            piche= piche->next;
            
        }
        temp->next=abhi;
        
    }
    else{
        ListNode* ans=temp->next;
        while(temp->next != NULL){
            temp= temp->next;
            piche= temp;
            piche= piche->next;
            
        }
        temp->next= abhi;
        if(ans== NULL) return A;
        else return ans;
    }
    
    return A;
}
