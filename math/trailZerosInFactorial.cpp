int Solution::trailingZeroes(int A) {
    int twos= 0, fives=0;
    int num=A;
    while(num>0){
        fives+= (num/5);
        num/=5;
    }
    num=A;
    while(num>0){
        twos+= (num/2);
        num/=2;
    }
    int out= min(twos, fives);
    return out;
}
