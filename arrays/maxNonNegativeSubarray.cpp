vector<int> Solution::maxset(vector<int> &A) {
    int len= A.size();
    vector<int> output;
    vector<int> temp;
    long int sum=0, max_sum=INT_MIN;
    for(int i=0;i<len;i++){
        if(A[i]>=0){
            sum+= (long int)(A[i]);
            temp.push_back(A[i]);
        }else{
            if(sum> max_sum){
                max_sum=sum;
                output= temp;
            }else if(sum == max_sum){
                if(temp.size() > output.size()){
                    output= temp;
                }
            }
            sum=0;
            temp.clear();
        }
    }
    if(sum> max_sum){
        max_sum=sum;
        output= temp;
    }else if(sum == max_sum){
        if(temp.size() > output.size()){
            output= temp;
        }
    }
    return output;
}
