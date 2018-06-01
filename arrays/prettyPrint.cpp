vector<vector<int> > Solution::prettyPrint(int A) {
    int row=2*A-1,col= 2*A-1;
    bool left=0, right=1, up=0, down=0;
    vector<vector<int>> out(row);
    for(int i=0;i<row;i++){
        out[i]= vector<int>(col);
        for(int j=0;j<col;j++){
            out[i][j]=0;
        }
    }
    
    //cout<<row<<"**"<<col<<endl;
    int i=0, j=0, num=A, count=1;
    while(num>0){
        //cout<<num<<"*/*";
        if(right && j== col-count){
            out[i][j]= num;
            right=0;
            down=1;
            if(i==row/2 && j==col/2) break;
            i++;
        }else if(right){
            out[i][j]=num;
            j++;
        }else if(down && i==row-count){
            out[i][j]=num;
            down=0;
            left=1;
            j--;
        }else if(down){
            out[i][j]=num;
            i++;
        }else if(left && j==count-1){
            out[i][j]=num;
            left=0;
            up=1;
            i--;
        }else if(left){
            out[i][j]=num;
            j--;
        }else if(up && i==count){
            out[i][j]=num;
            up=0;
            right=1;
            j++;
            num=num-1;
            count++;
        }else if(up){
            out[i][j]=num;
            i--;
        }
        //cout<<out[i][j]<<" ";
    }
    return out;
}
