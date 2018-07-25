int Solution::kthsmallest(const vector<int> &A, int B) {
    int n=A.size();
    int low=INT_MAX;
    int high= INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i] < low) low=A[i];
        if(A[i] > high) high=A[i];
    }
    
    int mid=0;
    while(low <= high){
        mid= (low+high)/2;
        int less=0, same=0;
        for(int i=0;i<n;i++){
            if(A[i] < mid) less++;
            else if(A[i]==mid) same++;
            if(less >= B) break;
        }
        
        if(B>less && B<=(same+less)){
            return mid;
        }else if(B> (same+less)){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
