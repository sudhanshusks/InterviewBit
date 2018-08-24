bool inside(int x, int y, int row, int col){
    if(x<=row && y<=col && x>=0 && y>=0) return true;
    return false;
}

bool outofcircle(int x, int y, int n, int r, vector<int>& row, vector<int>& col){
    for(int i=0;i<n;i++){
        int cx= row[i];
        int cy= col[i];
        float dist= sqrt(pow((cx-x),2) + pow((cy-y),2));
        if(dist <= float(r)) return false;
    }
    return true;
}

string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    int mat[A+1][B+1];
    bool vis[A+1][B+1];
    for(int i=0;i<=A;i++){
        for(int j=0;j<=B;j++){
            mat[i][j]=1;
            vis[i][j]=0;
        }
    }
    
    queue<pair<int, int>> q;
    pair<int,int> start(0,0);
    q.push(start);
    vis[0][0]=true;
    pair<int, int> end(A, B);
    int n= C;
    
    while(!q.empty()){
        pair<int, int> temp= q.front();
        q.pop();
        if(temp==end){
            return "YES";
        }
        int x= temp.first;
        int y= temp.second;
        //cout<<x<<" "<<y<<'\n';
        if(inside(x+1, y, A, B) && !vis[x+1][y] && outofcircle(x+1, y, n, D, E, F)){
            q.push(make_pair(x+1, y));
            vis[x+1][y]=1;
        }
        if(inside(x-1, y, A, B) && !vis[x-1][y]&& outofcircle(x-1, y, n, D, E, F)){
            q.push(make_pair(x-1, y));
            vis[x-1][y]=1;
        }
        if(inside(x, y+1, A, B)&& !vis[x][y+1]&& outofcircle(x, y+1, n, D, E, F)){
            q.push(make_pair(x, y+1));
            vis[x][y+1]=1;
        }
        if(inside(x, y-1, A, B) && !vis[x][y-1]&& outofcircle(x, y-1, n, D, E, F)){
            q.push(make_pair(x, y-1));
            vis[x][y-1]=1;
        }
        if(inside(x+1, y+1, A, B) && !vis[x+1][y+1] && outofcircle(x+1, y+1, n, D, E, F)){
            q.push(make_pair(x+1, y+1));
            vis[x+1][y+1]=1;
        }
        if(inside(x+1, y-1, A, B)&& !vis[x+1][y-1]&& outofcircle(x+1, y-1, n, D, E, F)){
            q.push(make_pair(x+1, y-1));
            vis[x+1][y-1]=1;
        }
        if(inside(x-1, y+1, A, B)  && !vis[x-1][y+1]&& outofcircle(x-1, y+1, n, D, E, F)){
            q.push(make_pair(x-1, y+1));
            vis[x-1][y+1]=1;
        }
        if(inside(x-1, y-1, A, B) && !vis[x-1][y-1]&& outofcircle(x-1, y-1, n, D, E, F)){
            q.push(make_pair(x-1, y-1));
            vis[x-1][y-1]=1;
        }
    }
    return "NO";
}
