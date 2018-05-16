long long int smaller_chars(string str,long long int n){
    long long int len= str.length();
    long long int count=0;
    for(long long int i=n+1; i<len; i++){
        if(str[i]< str[n]) count++;
    }
    return count;
}

int Solution::findRank(string A) {
    long long int n=A.length();
    long long int out=0;
    //used to prevent overflow of factorial by taking mod in every iteration
    vector<long long int> fact(n+1, 1);
    for(long long int i=1; i<=n;i++){
        fact[i]= (fact[i-1]*i)%1000003 ;
    }
    
    for(long long int i=0; i<n ;i++){
        long long int smaller= smaller_chars(A, i);
        out+= (long long int)((smaller*fact[n-i-1])%1000003);
        out%= 1000003;
    }
    out= (int)(out+1);
    return out;
}