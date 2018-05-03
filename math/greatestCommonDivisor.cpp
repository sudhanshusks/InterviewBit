int Solution::gcd(int A, int B) {
    int smallest= min(A, B);
    if(A==0 ){
        return B; 
    }
    if(B==0){
        return A;
    }
    
    for(int i=smallest; i>0; i--){
        if((A%i == 0) &&(B%i==0)){
            return i;
        }
    }
}
