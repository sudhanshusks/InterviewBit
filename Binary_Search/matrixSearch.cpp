int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int row= A.size();
    int col= A[0].size();
    int low=0;
    int high= row*col -1;
    if(row == 0 || col == 0) return 0;
    
    while(low<=high){
        int mid= (low+high)/2;
        int i= mid/col;
        int j= mid%col;
        //cout<<A[i][j]<<endl;
        if(A[i][j] == B) return 1;
        else if(A[i][j]< B) low= mid+1;
        else high=mid-1;
    }
    return 0;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
