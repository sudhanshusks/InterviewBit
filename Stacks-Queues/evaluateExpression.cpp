int Solution::evalRPN(vector<string> &A) {
    int n=A.size();
    stack<int> num;
    for(int i=0;i<n;i++){
        char c= (char)A[i][0];
        //cout<<c<<endl;
        if((A[i].length() ==1) && (c== '+' || c=='-' || c== '*' || c=='/')){
            int num2= num.top();
            num.pop();
            int num1= num.top();
            num.pop();
            int res=0;
            switch(c){
                case '+': res= num1+num2;
                num.push(res);
                break;
                case '-': res= num1-num2;
                num.push(res);
                break;
                case '*': res= num1*num2;
                num.push(res);
                break;
                case '/': res= num1/num2;
                num.push(res);
                break;
            }
            //cout<<res<<"* ";
        }
        else{
            int a=0;
            if(A[i][0]=='-'){
                int l=A[i].length();
                for(int j=1;j<l;j++){
                    int temp= A[i][j] -'0';
                    a= a*10+ temp;
                }
                a= -a;
            }else{
                int l=A[i].length();
                for(int j=0;j<l;j++){
                    int temp= A[i][j] -'0';
                    a= a*10+ temp;
                }
            }
            num.push(a);
        }
    }
    return num.top();
}
