vector<int> Solution::sieve(int A) {
    vector<int> out;
    for(int i=2;i<=A;i++){
        int count=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j ==0){
                count++;
                break;
            }
        }
        if(count == 0 )
            out.push_back(i);
    }
    return out;
}
