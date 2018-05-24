int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    int j=1;
    for(int i=1;i<n;i++){
        if(A[i] != A[j-1]){
            A[j]= A[i];
            j++;
        }
    }
    //if(n>1) A.erase(A.begin()+j-1, A.begin()+n-1);
    
    return j;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
