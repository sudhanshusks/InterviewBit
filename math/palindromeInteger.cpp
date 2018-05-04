int Solution::isPalindrome(int A) {
    int B=0;
    int c=A;
    while(c!=0){
        B = B*10 + (c%10);
        c/=10;
        //cout<<B<<endl;
    }
    //cout<<B;
    if(A<0)
        return 0;
    else if(A==B)
        return 1;
    else
        return 0;
}
