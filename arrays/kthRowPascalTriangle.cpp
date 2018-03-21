vector<int> Solution::getRow(int A) {
    vector<int> out;
    int val=1;
    if(A==0){
        out.push_back(1);
        return out;
    }
    out.push_back(val);
    for(int i=0; i<A ;i++){
        val = (int)((val*(A- i))/(i+1));
        out.push_back(val);
    }
    return out;
}
