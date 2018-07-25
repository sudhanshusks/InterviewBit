int Solution::numRange(vector<int> &A, int B, int C) {
    int n= A.size();
    if(n==0) return 0;
    int start=0, end=0;
    int sum=0, out=0;
    
    while(start<n ){
        sum+= A[end];
        if(sum<= C && sum>=B){
            out++;
            end++;
        }else{
            if(sum> C){
                start++;
                end=start;
                sum=0;
            }else{
                end++;
            }
        }
        
        if(end==n){
            sum=0;
            start++;
            end=start;
        }
    }
    return out;
}
