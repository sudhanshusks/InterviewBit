int Solution::titleToNumber(string A) {
    int n=A.length();
    int out=0;
    for(int i=1;i<n;i++){
        out+= pow(26, i);
    }
    for(int i=n-1; i>=0; i--){
        out+= (int)(A[i] - 'A')*pow(26, n-i-1);
    }
    out+= 1;
    return out;
}
