struct Node{
    char c;
    struct Node* next;
};

struct Node* createNode(char val){
    struct Node* temp= new struct Node;
    temp->c= val;
    temp->next= NULL;
    return temp;
}

void enqueue(struct Node** head, char val){
    struct Node* temp= createNode(val);
    temp->next=(*head);
    *head= temp;
    return;
}

char dequeue(struct Node** head){
    if((*head) == NULL) return NULL;
    char data= (*head)->c;
    (*head)= (*head)->next;
    return data;
}

string Solution::reverseString(string A) {
    int n= A.length();
    struct Node* stack= NULL;
    for(int i=0;i<n;i++){
        enqueue(&stack, A[i]);
    }
    string out="";
    while(stack != NULL){
        char val= dequeue(&stack);
        out= out+ val;
    }
    return out;
}
