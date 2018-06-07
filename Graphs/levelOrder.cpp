/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int maxDepth(TreeNode* root){
     if(root== NULL) return 0;
     int ldepth= maxDepth(root->left);
     int rdepth= maxDepth(root->right);
     if(ldepth>rdepth) return ldepth+1;
     else return rdepth+1;
 }

 
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    int depth= maxDepth(A);
    vector<vector<int>> out(depth);
    if(A== NULL) return out;
    queue<TreeNode*> q;
    q.push(A);
    int row=0, count=1, col=1;
    while(1){
        col= q.size();
        count=col;
        out[row]= vector<int>(col,0);
        if(count==0) break;
        //cout<<col<<endl;
        while(count>0){
            //cout<<count<<" ";
            TreeNode* temp=q.front();
            q.pop();
            int value= temp->val;
            out[row][col-count]=value;
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            count--;
        }
        row++;
    }
    
    return out;
}
