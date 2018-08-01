int Solution::jump(vector<int> &A) {
    int n=A.size();
    if(n==1)return 0;
    int count=1;
    int maxIdx=A[0];
    if(maxIdx>=n-1) return count;
    for(int currIdx=1;currIdx<n;currIdx++){
        int tempMax=maxIdx;
        for(int j=currIdx;j<=maxIdx;j++){
            if(j+A[j] > tempMax){
                tempMax=j+A[j];
                currIdx=j;
            }
        }
        count++;
        if(tempMax>=n-1)return count;
        maxIdx= tempMax;
    }
    return -1;
}
