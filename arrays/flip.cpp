vector<int> Solution::flip(string A) {
    vector<int> ZeroOrOne(A.size()); // if zero then 1, if one then -1.
    vector<int> ans;
    
    for(int i = 0; i<A.size(); i++){
        if(A[i]=='0')
            ZeroOrOne[i] = 1;
        
        else
            ZeroOrOne[i] = -1;
    }
    
    int sum=0;
    int L=0, R=0;
    int max_sum=INT_MIN;
    int left_ans=0, right_ans=0;
    
    for(int i=0; i<A.size(); i++){
        sum+=ZeroOrOne[i];
        
        if(sum<0){
            L=i+1;
            sum=0;
        }
        
        else if(sum>max_sum){
            left_ans = L;
            right_ans = i;
            max_sum=sum;
        }
    }
    
    if(max_sum<=0){
        return ans;
    }
    
    else{
        ans.push_back(left_ans+1);
        ans.push_back(right_ans+1);
    }
    
    return ans;
}