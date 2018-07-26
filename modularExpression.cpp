long long int modulas(int a, int n, int mod){
    if(n==0) return 1;
    else if(n%2==0){
        long long int y=modulas(a, n/2, mod);
        y=((y%mod)*(y%mod))%mod;
        return y;
    }else{
        long long int y= ((a%mod)*modulas(a, n-1, mod))%mod;
        return y;
    }
}

int Solution::Mod(int A, int B, int C) {
    if(A==0) return 0;
    if(B==0) return 1;
    int ans= modulas(A, B,C);
    if(ans <0){
        ans = ans +C;
    }
    return ans;
}
