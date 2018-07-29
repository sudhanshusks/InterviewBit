int Solution::chordCnt(int A) {
    long long int mod= (long long int)(pow(10,9))+7;
    long long int arr[A+1];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=A;i++){
        arr[i]= arr[i-1]*2;
        for(int j=1;j<i-1;j++){
            arr[i]+= (arr[j]*arr[i-j-1])%mod;
        }
        arr[i]= arr[i]%mod;
    }
    return (int)(arr[A]);
}
