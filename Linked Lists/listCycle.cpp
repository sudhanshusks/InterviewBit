/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* slow= A;
    ListNode* fast=A;
    int flag=0;
    while(slow && fast && fast->next){
        slow= slow->next;
        fast= fast->next->next;
        if(slow == fast){
            flag=-1;
            break;
        }
    }
    ListNode* temp=A;
    fast= slow;
    while(temp!= fast){
        if(temp== slow){
            return temp;
        }
        temp= temp->next;
        slow= slow->next;
    }
    if(flag == -1) return slow;
    else return NULL;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
