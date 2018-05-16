int Solution::uniquePaths(int A, int B) {
    int out=1;
    if(A>B){
        for(int i=B; i<=A+B-2; i++){
            out*=i;
            out/=(i-B+1);
        }   
    }else{
        for(int i=A; i<=A+B-2; i++){
            out*=i;
            out/=(i-A+1);
        }   
    }
    return out;
}
