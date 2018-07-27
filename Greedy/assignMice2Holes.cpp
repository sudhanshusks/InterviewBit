int Solution::mice(vector<int> &A, vector<int> &B) {
    int m=A.size();
    int n=B.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int out=0;
    for(int i=0;i<n;i++){
        if(abs(A[i]-B[i]) > out) out= abs(A[i]-B[i]);
    }
    return out;
}
