/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    ListNode* tempA= A;
    ListNode* tempB= B;
    int countA=0, countB=0;
    int flag=0;
    while(tempA != NULL){
        countA++;
        tempA= tempA->next;
    }
    while(tempB!=NULL){
        countB++;
        tempB= tempB->next;
    }
    
    int diff=0;
    tempA=A, tempB=B;
    if(countA > countB){
        diff= countA- countB;
        while(diff >0){
            tempA= tempA->next;
            diff--;
        }
        while(tempA!= NULL && tempB!= NULL){
            if(tempA == tempB){
                flag=-1;
                break;
            }
            tempA= tempA->next;
            tempB= tempB->next;
        }
    }else{
        diff= countB- countA;
        while(diff >0){
            tempB= tempB->next;
            diff--;
        }
        while(tempA!= NULL && tempB!= NULL){
            if(tempA == tempB){
                flag=-1;
                break;
            }
            tempA= tempA->next;
            tempB= tempB->next;
        }
    }
    if(flag == -1) return tempA;
    else return NULL;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
