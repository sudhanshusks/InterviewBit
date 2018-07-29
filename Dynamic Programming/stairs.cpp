int count(int arr[], int n){ //Pass by reference is int arr[], very simple
    if(n<=2){
        arr[n]=n;
        return arr[n];
    }
    if(arr[n]!=0){
        return arr[n];
    }else{
        arr[n]= count(arr, n-1) + count(arr, n-2);
        return arr[n];
    }
}

int Solution::climbStairs(int A) {
    int steps[A+1];
    for(int i=0;i<A+1;i++) steps[i]=0;
    int ans= count(steps, A);
    //cout<<ans<<endl;
    return steps[A];
}
