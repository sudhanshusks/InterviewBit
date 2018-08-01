int Solution::cnttrue(string A) {
    int n=A.size();
    int len= n/2 +1;
    char symbol[len];
    char oper[n-len];
    for(int i=0;i<n;i++){
        int idx=i/2;
        if(i%2 ==0) symbol[idx]=A[i];
        else oper[idx]= A[i];
    }
    
    int mod=1003;
    int F[len][len];
    int T[len][len];
    for(int i=0;i<len;i++){
        if(symbol[i]=='T') T[i][i]=1;
        else T[i][i]=0;
        
        if(symbol[i]=='F') F[i][i]=1;
        else F[i][i]=0;
    }
    
    for(int gap=1;gap<len;gap++){
        for(int i=0, j=gap;j<len; j++, i++){
            T[i][j]=0;
            F[i][j]=0;
            for(int k=i;k<j;k++){
                //int k= i+g;
                int tik= T[i][k]+ F[i][k];
                int tkj= T[k+1][j] + F[k+1][j];
                
                if(oper[k]=='&'){
                    T[i][j]+= (T[i][k]*T[k+1][j])%mod;
                    F[i][j]+= (tik*tkj - T[i][k]*T[k+1][j])%mod;
                }
                if(oper[k]=='|'){
                    T[i][j]+= (tik*tkj - F[i][k]*F[k+1][j])%mod;
                    F[i][j]+= (F[i][k]*F[k+1][j])%mod;
                }
                if(oper[k] == '^'){
                    T[i][j]+= (T[i][k]*F[k+1][j] + F[i][k]*T[k+1][j])%mod;
                    F[i][j]+= (F[i][k]*F[k+1][j] + T[i][k]*T[k+1][j])%mod;
                }
            }
        }
    }
    
    
    return (T[0][len-1])%1003;
}
