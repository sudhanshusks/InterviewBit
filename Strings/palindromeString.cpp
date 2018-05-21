int Solution::isPalindrome(string A) {
    int n=A.length();
    int flag=0;
    vector<char> str;
    for(int i=0; i<n; i++){
        char c= tolower(A[i]);
        if((c<='z' && c>='a') || (c<='9' && c>='0')){
            str.push_back(c);
        }
    }
    int len=str.size();
    if(len==0) return 1;
    //cout<<len<<endl;
    for(int i=0; i<=len/2; i++){
        char c= str[i];
        char d= str[len-i-1];
        if(c!=d){
            flag=-1;
            break;
        }
    }
    //cout<<flag<<endl;
    if(flag==0) return 1;
    else return 0;
}
