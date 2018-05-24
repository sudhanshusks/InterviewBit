int Solution::atoi(const string A) {
    int n=A.length();
    string str="";
    int sign=1;
    for(int i=0;i<n;i++){
        if(A[i]> '9' || A[i] <'0'){
            if(A[i]== '-'){
                sign=-1;
                continue;
            }else if(A[i]=='+'){
                sign= 1;
                continue;
            }else break;
        }else{
            str+=A[i];
        }
    }
    
    int len=str.length();
    if(len==0) return 0;
    //vector<int> out;
    int flag=0;
    long long num=0;
    for(int i=0;i<len;i++){
        int  val= str[i]- '0';
        //out.push_back(val);
        num= num*10 + (long long)val;
        if(num> INT_MAX){
            flag=-1;
            break;
        }
    }
    
    num= num*(long long)sign;
    if(num> INT_MAX ) return INT_MAX;
    else if(num < INT_MIN) return INT_MIN;
    else return (int)num;
}
