void Solution::nextPermutation(vector<int> &A) {
    int n= A.size();
    int temp=0,i=0;
    for(i=n-1;i>0;i--){
        if(A[i] > A[i-1]){
            break;
        }
    }
    
    if(i==0){
        sort(A.begin(), A.end());
        return;
    }
    
    int smallest= A[i-1], idx=i;
    for(int j=i+1; j<n; j++){
        if(A[j]< A[idx] && A[j] > smallest) idx= j;
    }
    
    temp=A[idx];
    A[idx] = A[i-1];
    A[i-1] = temp;
    
    sort(A.begin()+i, A.end());
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
