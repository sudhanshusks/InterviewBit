vector<vector<int>> out;

void swap(int* a, int* b){
    int* temp=a;
    a=b;
    b=a;
}

void all_permutation(vector<int> &arr, int left, int right){
    if(left>right){
        out.push_back(arr);
        return;
    }
    
    for(int i=left;i<=right;i++){
        swap(arr[i], arr[left]);
        all_permutation(arr, left+1, right);
        swap(arr[i], arr[left]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    out.clear();
    int n=A.size();
    all_permutation(A, 0, n-1);
    return out;
}
