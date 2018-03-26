vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    vector<vector<int>> out(2*n-1);
    for(int t=0; t<n; t++){
        int row=0, cnt=t;
        while(cnt>=0 && row<n){
            out[t].push_back(A[row][cnt]);
            row++;
            cnt--;
        }
    }
    for(int t=1; t<n; t++){
        int row=t, cnt=n-1;
        while(cnt>=0 && row<n){
            out[n+t-1].push_back(A[row][cnt]);
            row++;
            cnt--;
        }
    }
    return out;
}
