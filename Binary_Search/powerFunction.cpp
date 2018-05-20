int Solution::pow(int x, int n, int d) {
    long long int out=1;
    if(x==0) return 0;
    long long int num=n, base=x, mod=d;
    //x= x%d;
    while(num>0){
        if(num%2!=0) out= (base%mod)*(out%mod)%mod;
        //if above if works, it makes the num even
        base=(base%mod)*(base%mod)%mod;
        num/=2;
    }
    return (int)(out%mod+ mod)%mod;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
