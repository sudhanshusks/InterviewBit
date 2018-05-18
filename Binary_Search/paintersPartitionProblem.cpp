long long check(vector<int> C, long long mid, long long n, long long k){
    long long painters=1, i;
    long long total=0;
    for(i=0; i<n; i++){
        total+= C[i];
        if(total> mid){
            total= C[i];
            painters++;
        }
    }
    if(painters>k) return 0;
    else return 1;
}

/*
Here we are using binary search from max_element to sum_element and find #blocks
in between that minimizes the maximum blocks for a painter.
Constraint used in check is that optimum blocks is obtained iff all the painters
are used for divison
*/
int Solution::paint(int A, int B, vector<int> &C) {
    long long l, r, mid;
    long long i, n=C.size();
    int max= INT_MIN;
    for(i=0; i<n; i++){
        if(C[i] > max) max= C[i];
    }
    
    long long  sum=0;
    for(i=0; i<n; i++){
        sum+= (long long)C[i];
    }
    
    l=(long long)max, r=sum;
    while(l<r){
        mid= (l+r)/2;
        if(check(C,mid, n, A)) r=mid;
        else l= mid+1;
    }
    long long x= check(C, l, n, A);
    if(x==1) return (int)((l%10000003)*(B%10000003)%10000003);
    else return (int)((r%10000003)*(B%10000003)%10000003);
}
