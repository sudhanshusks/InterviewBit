vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int n= A.size();
    long long int sum_actual= 0;
    long long int sum_square= 0;
    long long int sum_1toN= n*(n+1)/2;
    long long int sum_sq_1toN= sum_1toN*(2*n+1)/3;
    for(long long int i=0; i<n; i++){
        long long int num= (long long int)A[i];
        sum_actual+= num;
        sum_square+= num*num;
    }
    long long int diff= sum_actual - sum_1toN;
    long long int diff_sq= sum_square - sum_sq_1toN;
    long long int sum= (long long int)diff_sq/diff;
    int repeat= (int)(diff + sum)/2;
    int missing= (int)(sum - repeat);
    vector<int> out;
    out.push_back(repeat);
    out.push_back(missing);
    return out;
}
