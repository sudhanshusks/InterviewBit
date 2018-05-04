vector<int> Solution::subUnsort(vector<int> &A) {
    int n= A.size();
    int l=0, r=-1;
    vector<int> out;
    
    for(int i=0; i<n-1; i++){
        if(A[i+1] < A[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1; i>0; i--){
        if(A[i-1] > A[i]){
            r=i;
            break;
        }
    }
    
    int min= A[l], max= A[r];
    for(int i=l; i<=r; i++){
        if(A[i] < min){
            min = A[i];
        }
        if(A[i]> max){
            max= A[i];
        }
    }
    for(int i=0; i<l; i++){
        if(A[i] > min){
            l=i;
            break;
        }
    }
    for(int i=n-1; i>r; i--){
        if(A[i] <max){
            r=i;
            break;
        }
    }
    if(l==0 && r== -1){
        out.push_back(-1);
        return out;
    }else{
        out.push_back(l);
        out.push_back(r);
        return out;
    }
}
