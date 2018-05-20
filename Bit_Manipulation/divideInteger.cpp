int Solution::divide(int A, int B) {
    long long sign = 1;
    long long dividend=A, divisor=B, quotient=0;
    if (dividend<0){sign = -sign;}
    if (divisor<0){sign = -sign;}
    dividend= abs(dividend);
    divisor= abs(divisor);
    for(long long temp=0, i=31;i>=0;i--){
        if(temp+(divisor<<i) <=dividend){
            temp+= divisor<<i;
            quotient|= 1LL<<i;
        }
    }
    if(sign<0) quotient*=sign;
    if(quotient>= INT_MAX || quotient < INT_MIN) return INT_MAX;
    else return quotient;
}
