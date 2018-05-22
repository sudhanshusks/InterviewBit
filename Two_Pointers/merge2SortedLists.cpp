void Solution::merge(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int m= B.size();
    vector<int> out;
    int j=0,i=0;
    while(i<n && j<m){
        if(A[i] <= B[j]){
            out.push_back(A[i]);
            i++;
        }else{
            out.push_back(B[j]);
            j++;
        }
    }
    if(i==n){
        for(int k= j;k<m;k++) out.push_back(B[k]);
    }else if(j==m){
        for(int k=i;k<n;k++) out.push_back(A[k]);
    }
    //A.clear();
    for(int k=0;k<n;k++) A[k]=out[k];
    for(int k=n;k<n+m;k++) A.push_back(out[k]);
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
