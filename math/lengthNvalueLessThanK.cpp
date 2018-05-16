int Solution::solve(vector<int> &A, int B, int C) {
    int n=A.size();
    int out=0;
    string num= to_string(C);
    if(n==0) return 0;
    if(C==0) return 0;
    if(num.length() < B) return 0;
    if(num.length() > B){
        if(B==1) return n;
        if(B>1 && A[0]==0){
            return (int)pow(n, B) - (int)pow(n, B-1);
        }else return (int)pow(n, B);
    };
    //cout<<"hello";
    for(int i=1; i<=B; i++){
        int count=0;
        int flag=-1;
        for(int j=0; j<n; j++){
            if(A[j] < (num[i-1] -'0')){
                //cout<<(num[i-1]-'0')<<endl;
                count++;
            }
            if(A[j] == (num[i-1] -'0')) flag=0;
        }
        out+= count*(int)pow(n,B-i);
        if(flag==-1) break;
    }
    //cout<<out<<endl;
    if(A[0]==0 && B>1){
        out-=(int)pow(n, B-1);
    }
    
    return out;
}
