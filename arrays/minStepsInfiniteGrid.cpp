int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int min_steps=0;
    int len= A.size();
    for(int i=1; i<len;i++){
        int dx= abs(A[i] - A[i-1]);
        int dy= abs(B[i] - B[i-1]);
        /*
        if(dx<= dy){
            min_steps+= dx;
            dy-= dx;
            min_steps+= dy;
        }else{
            min_steps+= dy;
            dx-= dy;
            min_steps += dx;
        }
        */
        min_steps += max(dx, dy);
    }
    return min_steps;
}
