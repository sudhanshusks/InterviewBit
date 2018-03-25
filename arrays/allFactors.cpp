vector<int> Solution::allFactors(int A) {
    vector<int> out;
    for(int i=1;i<=sqrt(A);i++){
        if(A%i == 0){
            out.push_back(i);
            int val= (A/i);
            if(val !=i )
                out.push_back(val);
        }
    }
    sort(out.begin(), out.end());
    return out;
}
