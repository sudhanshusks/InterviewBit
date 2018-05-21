int Solution::findMinXor(vector<int> &A) {
    int n=A.size();
    //sort the array
    //min xor occurs at consecutive elements only because difference in bits
    //at most left is there in least different numbers
    sort(A.begin(), A.end());
    int min=A[0]^A[1];
    for(int i=1;i<n;i++){
        int num= A[i]^A[i-1];
        if(num<min) min=num;
    }
    return min;
}
