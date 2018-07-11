int Solution::braces(string A) {
    int n=A.length();
    int flag=0;
    stack<char> bracket;
    for(int i=0;i<n;i++){
        if(A[i] == '('){
            bracket.push(A[i]);
        }
        if(A[i] == ')'){
            if(bracket.top() == '(') flag=-1;
            while(bracket.top() != '('){
                bracket.pop();
            }
            bracket.pop();
        }
        if(A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/'){
            bracket.push(A[i]);
        }
    }
    if( !bracket.empty() && bracket.top() == '('){
        return 1;
    }
    if(flag== -1) return 1;
    return 0;
}
