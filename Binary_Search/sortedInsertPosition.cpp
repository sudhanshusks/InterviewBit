int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int left=0, right= n-1, mid;
    while(left<=right){
        mid= (left+right)/2;
        if(A[mid]== B) return mid;
        else if(A[mid] > B) right= mid-1;
        else left= mid+1;
    }
    return left;
}
