int Solution::numDecodings(string A) {
    int n=A.size();
    if(n==0){
        return 0;
    }
    if(A[0]=='0') return 0;
    
    int decode[n+1];
    decode[0]=1;
    decode[1]=1;
    for(int i=2;i<=n;i++){
        decode[i]=0;
        if(A[i-1] != '0') decode[i]= decode[i-1];
        
        if(A[i-2]=='1' || (A[i-2]=='2'  && A[i-1]<'7')){
            decode[i]+= decode[i-2];
        }
    }
    return decode[n];
}
