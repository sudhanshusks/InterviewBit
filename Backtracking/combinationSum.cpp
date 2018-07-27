vector<vector<int>> out;

void combination(vector<int> &arr, int num, int n, int idx, vector<int> & vect){
    if(num==0){
        out.push_back(vect);
        return;
    }
    
    for(int i=idx;i<n;i++){
        if(arr[i] > num)return;
        vect.push_back(arr[i]);
        combination(arr, num-arr[i], n, i, vect);
        vect.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    out.clear();
    int n=A.size();
    if(n==0) return out;
    sort(A.begin(), A.begin()+n);
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1]) A[i]=0;
    }
    sort(A.begin(), A.begin()+n);
    int idx=0;
    for(int i=0;i<n;i++){
        if(A[i]!=0){
            idx=i;
            break;
        }
    }
    vector<int> vect;
    combination(A, B, n, idx, vect);
    return out;
}
