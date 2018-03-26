int Solution::solve(vector<int> &A) {
    vector<int> copy= A;
    sort(copy.begin(), copy.end());
    int n= copy.size();
    for(int i=0; i<n; i++){
        int count=i;
        for(int j=i+1; j<n; j++){
            if(copy[j]==copy[i])
                count++;
            else
                break;
        }
        if(copy[i] == (n-1-count))
            return 1;
    }
    return -1;
}
