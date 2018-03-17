vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> val;
    int rows= A.size();
    int cols= A[0].size();
    int top=0, bottom=rows-1 , left=0, right= cols-1;
    int direction =0; 
    // direction of 0= traverse from L to R
    // direction of 1= traverse from T to B
    // direction of 2= traverse from R to L
    // direction of 3= traverse from B to T
    while(top <= bottom && left <= right){
        if(direction ==0){
            for(int i= left; i<= right; i++){
                val.push_back(A[top][i]);
            }
            top++;
        }
        else if(direction ==1){
            for(int i= top; i<= bottom; i++){
                val.push_back(A[i][right]);
            }
            right--;
        }
        else if(direction ==2){
            for(int i= right; i>= left; i--){
                val.push_back(A[bottom][i]);
            }
            bottom--;
        }
        else if(direction ==3){
            for(int i= bottom; i>= top; i--){
                val.push_back(A[i][left]);
            }
            left++;
        }
        direction = (direction +1)%4;
    }
    return val;
}
