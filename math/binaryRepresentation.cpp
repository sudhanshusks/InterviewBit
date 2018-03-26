string Solution::findDigitsInBinary(int A) {
    string str1="";
    if(A==0)
        return "0";
    while(A>0){
        int rem= A%2;
        str1 = to_string(rem)+ str1;
        A/=2;
    }
    return str1;
}
