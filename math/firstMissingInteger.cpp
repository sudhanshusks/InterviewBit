int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    int pos=0; //location of positive array start
    for(int i=0; i<n; i++){
        if(A[i] <=0){
            int temp=A[i];
            A[i]= A[pos];
            A[pos]= temp;
            pos++;
        }
    }
    
    //cout<<pos<<endl;
    //for(int j=0;j<n;j++) cout<<A[j]<<" ";
    
    
    for(int j=pos; j<n;j++){
        if((abs(A[j]) -1+pos)< n && A[abs(A[j])-1+pos]>0){
            A[abs(A[j])-1+pos]= -A[abs(A[j]) -1+pos];
            //cout<<A[j]<<" ";
        }
    }
    
    //for(int j=0;j<n;j++) cout<<A[j]<<" ";
    
    for(int j=pos; j<n;j++){
        if(A[j] >0){
            return (j+1-pos);
        } 
    }
    return (n+1-pos);
}
