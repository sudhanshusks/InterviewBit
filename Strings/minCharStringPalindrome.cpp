int Solution::solve(string A) {
    int length=A.length();
    string reverse="";
    for(int i=0;i<length;i++) reverse+= A[length-i-1];
    
    string newString= A+"$"+reverse;
    int n=newString.length();
    int lps[n];
    lps[0]=0;
    int i=1, len=0;
    while(i<n){
        if(newString[i] == newString[len]){
            len++;
            lps[i]= len;
            i++;
        }else{
            if(len !=0){
                len= lps[len-1];
            }else{
                //len=0;
                lps[i]=0;
                i++;
            }
        }
    }
    int out= length- lps[n-1];
    return out;
}
