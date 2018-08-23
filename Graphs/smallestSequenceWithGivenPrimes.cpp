vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> num;
    map<int, int> check;
    num.push_back(1);
    int arr[]= {A, B,C};
    sort(arr, arr+3);
    int p1= arr[0];
    int p2= arr[1];
    int p3= arr[2];
    int c1=0, c2=0, c3=0;
    while(num.size() <= D){
        int next= min(p1*num[c1], min(p2*num[c2], p3*num[c3]));
        if(check.find(next) == check.end()){
            num.push_back(next);
            check[next]=next;
        }
        if(next == p1*num[c1]) c1++;
        else if(next == p2*num[c2]) c2++;
        else c3++;
    }
    num.erase(num.begin(), num.begin()+1);
    return num;
}
