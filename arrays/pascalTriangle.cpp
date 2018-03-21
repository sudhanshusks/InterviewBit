vector<vector<int> > Solution::generate(int A) {
    vector<vector<int>> final;
    if(A==0)
        return final;
    vector<vector <int>> out(A);    
    out[0]= vector<int>(1);
    out[0][0]= 1;
    if(A==1)
        return out;
    
    for(int i=1;i<A;i++){
        out[i]= vector<int>(i+1);
        for(int j=0; j< i+1; j++){
            if(j==0){
                out[i][j] = out[i-1][j] ;
            }else if(j==i){
                out[i][j] = out[i-1][j-1];
            }else{
                out[i][j] = out[i-1][j] + out[i-1][j-1];
            }
        }
    }
    return out;
}
