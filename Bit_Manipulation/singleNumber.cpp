int Solution::singleNumber(const vector<int> &A) {
    // a⊕b⊕a=(a⊕a)⊕b=0⊕b=b
    int n=A.size();
    int out=A[0];
    for(int i=1;i<n;i++){
        out^=A[i];
    }
    return out;
}
