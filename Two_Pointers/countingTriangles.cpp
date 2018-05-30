int Solution::nTriang(vector<int> &A) {
    int n=A.size();
    sort(A.begin(), A.end());
    int mod= pow(10,9) +7;
    int count=0;
    //int k=2;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=j+1;
        while(j<n-1){
            while(k<n){
                if(A[i]+A[j] > A[k]) k++;
                else break;
            }
            count+= abs(k-j-1);
            count= count%mod;
            j++;
        }
        
        //cout<<count<<" "<<i<<endl;
    }
    
    return count;
}
