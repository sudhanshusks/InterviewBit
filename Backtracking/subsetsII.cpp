set<vector<int>> out;

void subset(vector<int>& arr, int start,int n, vector<int>& vect){
    if(start >= n){
        out.insert(vect);
        return;
    }
    vect.push_back(arr[start]);
    subset(arr, start+1, n, vect);
    vect.pop_back();
    subset(arr, start+1, n, vect);
    return;
    
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    int n=A.size();
    out.clear();
    vector<int> vect;
    sort(A.begin(), A.begin()+n);
    subset(A, 0, n, vect);
    
    vector<vector<int>> result;
    set<vector<int>>:: iterator itr= out.begin();
    while(itr!=out.end()){
        result.push_back(*itr);
        itr++;
    }
    return result;
}
