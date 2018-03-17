int Solution::maxArr(vector<int> &A) {
    int len= A.size();
    int max_val=0;
    int max1=A[0], min1=A[0], max2=A[0], min2=A[0];
    for(int i=1; i<len;i++){
        max1= max(A[i] +i, max1);
        min1= min(A[i]+ i, min1);
        max2= max(A[i] -i, max2);
        min2= min(A[i]-i, min2);
    }
    max_val= max(max1- min1, max2-min2);
    return max_val;
}