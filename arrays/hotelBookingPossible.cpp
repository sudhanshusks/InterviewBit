bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int arr = 0;
    int dep = 0;
    
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    while(arr < arrive.size()){
        K--;
        arr++;
        if(K == 0){
            if(arrive[arr] >= depart[dep]){
                K++;
                dep++;
            }    
        }
        if(K < 0){
            return false;
        }
    }
    return true;
}
