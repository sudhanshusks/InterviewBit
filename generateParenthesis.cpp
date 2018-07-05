struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int x){
    struct Node* temp= new struct Node;
    temp->data= x;
    temp->next= NULL;
    return temp;
}

void push(struct Node** top, int x){
    struct Node* temp= createNode(x);
    temp->next= (*top);
    (*top)=temp;
    return;
}

int pop(struct Node** top){
    if(*top==NULL) return 0;
    int val=(*top)->data;
    *top=(*top)->next;
    return val;
}

int Solution::isValid(string A) {
    int n=A.length();
    int flag=1, count=0;
    struct Node* q= NULL;
    string str="";
    for(int i=0;i<n;i++){
        if(A[i]== '(' || A[i]=='{' || A[i]=='['){
            int x=(int)A[i];
            //cout<<x<<"*/* ";
            push(&q, x);
            //cout<<q->data<<" ";
        }else{
            count++;
            int x=pop(&q);
            //cout<<x<<" ";
            //str= str+ x;
            //cout<<(int)A[i]<<" ** "<<x<<" * ";
            switch(x){
                case '(': if(A[i] != ')') flag=0;
                break;
                case '{': if(A[i] != '}') flag=0;
                break;
                case '[': if(A[i] != ']') flag=0;
                break;
                default: flag=0;
            }
        }
    }
    if(q!= NULL) return 0;
    //cout<<str.length()<<"**"<<count<<endl;
    return flag;
}
