int Solution::findCount(const vector<int> &A, int B) {
    int left=0, right=A.size()-1, mid;
    int n=A.size();
    int out=0;
    int first=-1, last;
    while(left <= right){
        mid=(left+right)/2;
        if(A[mid] == B){
            first= mid;
            right= mid-1; //looking for the first occurence of B
        }else if(A[mid] < B){
            left= mid+1;
        }else{
            right= mid -1;
        }
    }
    left=0;
    right= n-1;
    while(left <= right){
        mid=(left+right)/2;
        if(A[mid] == B){
            last= mid;
            left= mid+1; //looking for the last occurence of B
        }else if(A[mid] < B){
            left= mid+1;
        }else{
            right= mid -1;
        }
    }
    if(first == -1) return 0; // if the element is not found first will not change
    else out= last- first +1;
    return out;
}
