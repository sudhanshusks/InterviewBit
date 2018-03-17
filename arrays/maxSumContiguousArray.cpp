int Solution::maxSubArray(const vector<int> &A) {
    int max_sum=A[0];
    int current_max= A[0];
    int len= A.size();
    for(int i=1;i<len;i++){
        current_max= max(A[i], current_max+A[i]);
        max_sum= max(max_sum, current_max);
    }
    return max_sum;
}
