int myCompare(int X, int Y){
    string XY= "";
    XY += to_string(X);
    XY+= to_string(Y);
    string YX= "";
    YX += to_string(Y);
    YX+= to_string(X);
    if(XY.compare(YX) > 0){
        return 1;
    }else
        return 0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> copy= A;
    sort(copy.begin(), copy.end(), myCompare);
    string out="";
    for(int i=0; i<A.size(); i++){
        out += to_string(copy[i]);
        //cout<<out<<endl;
    }
    string str="";
    int ind=0;
    for(int i=0; i< out.size(); i++){
        if(out[i] == '0'){
            ind++;
        }else
            break;
    }
    str= out.substr(ind, out.size());
    if(str.size() == 0)
        return "0";
    else
        return str;
}

