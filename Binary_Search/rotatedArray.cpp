int Solution::findMin(const vector<int> &A) {
    int n=A.size();
    int low=0, high= n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(A[low] < A[high]) return A[low];
        int next= A[(mid+1)%n];
        int prev= A[(mid-1+n)%n];
        if(next> A[mid] && prev> A[mid]) return A[mid];
        if(A[low] <= A[mid]) low= mid+1;
        if(A[high] >= A[mid]) high= mid-1;
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
