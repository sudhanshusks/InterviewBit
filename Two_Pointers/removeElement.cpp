int Solution::removeElement(vector<int> &A, int B) {
    int n=A.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i] != B){
            A[count]= A[i];
            count++;
        }
    }
    return count;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
