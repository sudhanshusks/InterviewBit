int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int low=0, high=n-1, mid, index=0;
    while(low<=high){
        mid= (low+high)/2;
        int prev= A[(mid-1+n)%n];
        int next= A[(mid+1)%n];
        if(A[mid] < prev && A[mid]< next){
            index= mid;
            break;
        }else if(A[mid] > A[high]){
            low= mid+1;
        }else if(A[mid] < A[high]){
            high= mid-1;
        }
    }
    //cout<<index<<endl;
    low= index, high= (n-1);
    while(low<= high){
        mid= (low+high)/2;
        //mid= mid%n;
        if(A[mid]== B) return mid;
        else if(A[mid] < B) low= (mid+1);
        else high= (mid-1);
    }
    low=0, high=index-1;
    while(low<= high){
        mid= (low+high)/2;
        //mid= mid%n;
        if(A[mid]== B) return mid;
        else if(A[mid] < B) low= (mid+1);
        else high= (mid-1);
    }
    return -1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
