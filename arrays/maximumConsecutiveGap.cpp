int Solution::maximumGap(const vector<int> &A) {
    int n= A.size();
    if(n<2){
        return 0;
    }
    
    int minm= *min_element(A.begin(), A.end());
    int maxm= *max_element(A.begin(), A.end());
    float delta= (float)(maxm-minm)/((float)(n-1));
    vector<int> min_bucket(n-1, INT_MAX);
    vector<int> max_bucket(n-1, INT_MIN);
    for(int i=0; i<n;i++){
        if(A[i] == minm || A[i]==maxm){
            continue;
        }
        int idx= (int)floor((A[i]-minm)/delta);
        if(min_bucket[idx]==INT_MAX){
            min_bucket[idx]= A[i];
        }else{
            min_bucket[idx]= min(A[i], min_bucket[idx]);
        }
        if(max_bucket[idx]==INT_MIN){
            max_bucket[idx]= A[i];
        }else{
            max_bucket[idx]= max(A[i], max_bucket[idx]);
        }
    }
    
    int previous= minm;
    int max_gap=0;
    for(int i=0; i<n-1; i++){
        if(max_bucket[i]== INT_MIN){    
            continue;
        }
        
        max_gap= max(max_gap, min_bucket[i]- previous);
        previous= max_bucket[i];
    }
    max_gap= max(max_gap, maxm- previous);
    return max_gap;
}
