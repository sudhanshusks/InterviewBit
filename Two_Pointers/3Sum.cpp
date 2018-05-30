int Solution::threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    sort(A.begin(), A.end());
    int i=0, j=1, k=n-1;
    int sum=0, minimum=INT_MAX, out=0, diff=0;
    for(i=0;i<n-2;i++){
        j=i+1, k= n-1;
        while(j<k){
            sum= A[i]+ A[j]+A[k];
            diff= abs(sum - B);
            if(diff < minimum){
                minimum= diff;
                out=sum;
            }
            
            if(sum<B){
                j++;
            }else if(sum >B){
                k--;
            }else{
                out=sum;
                break;
            }
        }
    }
    //out=sum;
    return out;
}
