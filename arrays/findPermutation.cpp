vector<int> Solution::findPerm(const string A, int B) {
    int I=0, D=0;
    for(int i=0;i<A.size(); i++){
        if(A[i] =='I') I++;
        if(A[i]=='D')D++;
    }
    int c1= B-I;
    vector<int> out;
    out.push_back(c1);
    c1++;
    for(int i=0;i<A.size();i++){
        if(A[i]=='I'){
            out.push_back(c1);
            c1++;
        }
        if(A[i]=='D'){
            out.push_back(D);
            D--;
        }
    }
    return out;
}