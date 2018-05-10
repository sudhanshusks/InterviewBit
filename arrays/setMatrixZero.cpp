void Solution::setZeroes(vector<vector<int> > &A) {
    int row=A.size(), col= A[0].size();
    int rowflag=0, colflag=0;
    
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            if(i==0 && A[i][j]==0) rowflag=1;
            if(j==0 && A[i][j]==0) colflag=1;
            
            if(A[i][j] == 0){
                A[0][j]= 0;
                A[i][0]= 0;
            }
        }
    }
    
    for(int i=1;i<row;i++){
        for(int j=1; j<col; j++){
            if(A[0][j]== 0) A[i][j]=0;
            if(A[i][0] == 0) A[i][j]=0;
        }
    }
    
    if(rowflag == 1){
        for(int i=0; i<col; i++){
            A[0][i]=0; 
        }
    }
    
    if(colflag == 1){
        for(int i=0; i<row; i++){
            A[i][0]=0;
        }
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
