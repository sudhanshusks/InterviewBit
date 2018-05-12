int Solution::majorityElement(const vector<int> &A) {
    int n=A.size();
    int count=1, index=0;
    // Using Moore's Voting algorithm
    // We count occurance of each element and eliminate the element if its count==0
    for(int i=1; i<n; i++){
        if(A[i]== A[index]) count++;
        else count--;
        
        if(count==0){
            index=i;
            count=1;
        }
    }
    return A[index];
}
