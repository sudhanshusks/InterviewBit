stack<int> st;
stack<int> minim;

MinStack::MinStack() {
    while(!st.empty()) st.pop();
    
    while(!minim.empty()) minim.pop();
}

void MinStack::push(int x) {
    st.push(x);
    if(minim.empty()){
        minim.push(x);
    }else{
        if(x< minim.top()){
            minim.push(x);
        }else{
            minim.push(minim.top());
        }
    }
}

void MinStack::pop() {
    if(st.empty()) return;
    st.pop();
    minim.pop();
}

int MinStack::top() {
    if(st.empty()) return -1;
    return st.top();
}

int MinStack::getMin() {
    if(minim.empty()) return -1;
    return minim.top();
}

