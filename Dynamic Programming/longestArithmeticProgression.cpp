int Solution::solve(const vector<int> &A) {
    int n=A.size();
    if(n<=2) return n;
    
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=A[i];
    sort(arr, arr+n);
    int l[n];
    l[0]=1;
    for(int i=0;i<n;i++) l[i]=2;
    int ans=2;
    for(int i=n-2;i>0;i--){
        int j=i-1, k=i+1;
        while(j>=0 && k<=n-1){
            if(arr[j]+arr[k] == 2*arr[i]){
                l[i]= max(l[i], l[k]+1);
                ans=max(ans, l[i]);
                j--;
                k++;
            }
            else if(arr[j]+arr[k] > 2*arr[i]){
                j--;
            }
            else{
                k++;
            }
        }
    }
    return ans;
}
