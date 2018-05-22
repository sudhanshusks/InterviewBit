string Solution::addBinary(string A, string B) {
    int lena= A.length(), lenb=B.length();
    string a=A, b=B;
    int carry=0;
    string out="";
    if(lena <= lenb){
        //cout<<a.length()<<"**"<<endl;
        for(int i=0;i<(lenb-lena);i++){
            a= '0'+a;
        }
        //cout<<a<<"***"<<endl;
        string str;
        //cout<<a.length()<<"**"<<b.length()<<endl;
        for(int i=lenb-1; i>=0; i--){
            //cout<<a[i-1]<<"/*/";
            int vala= a[i]-'0';
            int valb= b[i]- '0';
            int val= vala+valb+carry;
            int add= val%2;
            carry=val/2;
            //cout<<vala<<"  "<<valb<<"* "<<carry<<"** "<<val<<"*** ";
            str= to_string(add);
            out=str+out;
        }
    }else if(lena > lenb){
        for(int i=0;i<(lena-lenb);i++){
            b= '0'+b;
        }
        string str;
        for(int i=lena-1; i>=0; i--){
            int vala= a[i]-'0';
            int valb= b[i]- '0';
            int val= vala+valb+carry;
            int add= val%2;
            carry=val/2;
            str= to_string(add);
            out=str+out;
        }
    }
    if(carry==1) out= "1"+out;
    return out;
}
