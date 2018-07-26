vector<vector<int>> out;

void all_combination(vector<int> arr, int start, int end, vector<int> subset){
    if(start > end){
        return;
    }
    
    for(int i=start;i<=end;i++){
        subset.push_back(arr[i]);
        out.push_back(subset);
        all_combination(arr, i+1, end, subset);
        subset.pop_back();
    }
    subset.pop_back();
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    int n=A.size();
    sort(A.begin(), A.begin()+n);
    out.clear();// erases all elements of vector
    vector<int> subset;
    out.push_back(subset);
    all_combination(A, 0, n-1, subset);
    return out;
}
