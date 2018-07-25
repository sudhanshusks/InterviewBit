int Solution::kthsmallest(const vector<int> &A, int B) {
    int n=A.size();
    //max head construction using priority queue 
    priority_queue<int, vector<int>> pq(A.begin(), A.begin()+B);
    for(int i=B;i<n;i++){
        if(pq.top() > A[i]){
            pq.pop();
            pq.push(A[i]);
        }
    }
    return pq.top();
}
