vector<int> Solution::plusOne(vector<int> &A) {
    int len= A.size();
    vector<int> reverse;
    vector<int> actual;
    vector<int> output;
     for(int i=1;i<= len;i++){
        reverse.push_back(A[len-i]);
    }
    
    int carry=1;
    for(int i=0; i<len ;i++){
        int num= reverse[i] + carry;
        carry= int(num/10);
        actual.push_back(num%10);
    }
    if(carry==1){
        actual.push_back(1);
    }
    for(int i=actual.size()-1;i>=0;i--){
        if(actual[i]!=0)
            break;
        else{
            actual.pop_back();
        }
    }
    
    for(int i=1;i<= actual.size();i++){
        output.push_back(actual[actual.size()-i]);
    }
    
    return output;
}
