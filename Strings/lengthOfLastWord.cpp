int Solution::lengthOfLastWord(const string A) {
    int len=0, count=0;
    int n= A.length();
    for(int i=0; i<n;i++){
        if(A[i]==' '){
            if(count !=0) len= count;
            count=0;
            continue;
        }
        count++;
        
    }
    if(count !=0) return count;
    else return len;
}
