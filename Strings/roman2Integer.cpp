int Solution::romanToInt(string A) {
    int n=A.length();
    int value=0, counti=0, countx=0, countc=0, countm=0, countv=0, countl=0, countd=0;
    for(int i=0;i<n;i++){
        if(A[i]=='I'){
            counti++;
        }else if(A[i]=='V'&& counti==1){
            value+=4;
            counti--;
        }else if(A[i]=='V'){
            countv++;
        }else if(A[i]=='L' && countx==1){
            value+=40;
            countx--;
        }else if(A[i]=='L'){
            countl++;
        }else if(A[i]=='D' && countc==1){
            value+=400;
            countc--;
        }else if(A[i]=='D'){
            countd++;
        }else if(A[i]=='X' && counti==1){
            value+=9;
            counti--;
        }else if(A[i]=='X'){
            //value+=10;
            countx++;
        }else if(A[i]=='C' && countx==1){
            value+=90;
            countx--;
        }else if(A[i]=='C'){
            countc++;
        }else if(A[i]=='M' && countc==1){
            value+=900;
            countc--;
        }else if(A[i]=='M'){
            countm++;
        }
    }
    value+=(counti+5*countv +10*countx+ 50*countl+100*countc+500*countd+1000*countm);
    return value;
}
