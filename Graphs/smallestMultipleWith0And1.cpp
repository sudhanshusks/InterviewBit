int checkrem(string str, int n){
    int len= str.length();
    int r=0;
    for(int i=0;i<len;i++){
        int val= str[i]-'0';
        r= r*10 + val;
        r%=n;
    }
    return r;
}

string Solution::multiple(int A) {
    if(A==0 || A==1) return to_string(A);
    queue<string> q;
    set<int> visit;
    string tmp="1";
    q.push(tmp);
    while(!q.empty()){
        string top= q.front();
        q.pop();
        int rem= checkrem(top, A);
        if(rem==0){
            return top;
        }
        if(visit.find(rem) == visit.end()){
            visit.insert(rem);
            tmp= top+"0";
            q.push(tmp);
            tmp= top+"1";
            q.push(tmp);
        }
    }
}
