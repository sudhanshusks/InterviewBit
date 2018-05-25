int Solution::bulbs(vector<int> &A) {
    int n=A.size();
    int count=0;
    if(n==0) return 0;
    if(!A[0]) count++;
    for(int i=1;i<n;i++){
        if(A[i]!= A[i-1]){
            count++;
        }
    }
    return count;
}
