vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size();
    int i=0,j=0, count=0, m=B, max=0, start=0;
    vector<int> out;
    for(i=0;i<n;i++){
        if(A[i]==0 && m>0){
            m--;
        }else if(A[i]==0 && m==0){
            if(count > max){
                max=count;
                start=j;
            }
            while(j<n){
               if(A[j]==0) {
                   j++;
                   break;
               }
                j++;
            }
            count=i-j;
        }
        count++;
    }
    
    if(count > max) {
        max=count;
        start=j;
    }
    
    for(int k=start;k<start+max;k++){
        out.push_back(k);
    }
    return out;
}
