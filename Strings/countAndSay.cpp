string Solution::countAndSay(int A) {
    string next="11";
    int n=A;
    //cout<<next<<" "<<n<<endl;
    if(n==1) return "1";
    while(n>2){
        string current=next;
        next="";
        int len=current.length();
        int count=1;
        //cout<<current<<"   "<<"3"<<endl;
        for(int i=1; i<len; i++){
            //cout<<current<<"  "<<endl;
            if(current[i] != current[i-1]){
                next+=to_string(count);
                next+= current[i-1];
                count=0;
            }
            //cout<<count<<"    "<<endl;
            count++;
        }
        if(count !=0){
            next+=to_string(count);
            next+= current[len-1];
        }
        n--;
        //cout<<next<<"**"<<endl;
    }
    return next;
}
