vector<vector<int> > Solution::generateMatrix(int A) {
    // A represent number of vectors inside vector i.e. # of rows
    // vector<int>(A) represent size of each vector i.e. # of cols
    vector<vector<int>> out(A, vector<int>(A));
    int top=0, bottom=A-1, left=0, right= A-1;
    int dir=0;
    // dir=0 for right move
    // dir=1 for bottom move
    // dir=2 for left move
    // dir=3 for up move
    int count=1;
    while(top <= bottom && left <= right){
        if(dir==0){
            for(int i=left; i<=right; i++){
                out[top][i]= count;
                count++;
            }
            top++;
        }else if(dir==1){
            for(int i=top; i<=bottom; i++){
                out[i][right]= count;
                count++;
            }
            right--;
        }else if(dir==2){
            for(int i=right; i>=left; i--){
                out[bottom][i]= count;
                count++;
            }
            bottom--;
        }else if(dir==3){
            for(int i=bottom; i>= top; i--){
                out[i][left]= count;
                count++;
            }
            left++;
        }
        dir= (dir+1)%4;
    }
    return out;
}
