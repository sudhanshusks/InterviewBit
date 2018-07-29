int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    if(n==0) return 0;
    int lis[n];
    int lds[n];
    
    for(int i=0;i<n;i++){
        lis[i]=1;
        lds[i]=1;
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j]<A[i] && lis[i]< lis[j]+1){
                lis[i]= lis[j]+1;
            }
        }
    }
    
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(A[j]<A[i] && lds[i]< lds[j]+1){
                lds[i]= lds[j]+1;
            }
        }
    }
    
    int maxm=lis[0]+lds[0]-1;
    for(int i=1;i<n;i++){
        //cout<<lis[i]<<"**"<<lds[i]<<"//";
        int num= lis[i]+lds[i]-1;
        if(num>maxm) maxm=num;
    }
    return maxm;
}
