int Solution::solve(int A) {
    long int mod= pow(10,9)+7;
    if(A==0)return 0;
    long int color2=12;
    long int color3=24;
    long int temp=0;
    for(int i=2;i<=A;i++){
        temp= color3;
        color3= (10*color2+11*color3)%mod;
        color2= (5*temp+ 7*color2)%mod;
    }
    long int result= (color2+color3)%mod;
    return (int)result;
}
