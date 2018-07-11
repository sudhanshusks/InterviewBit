vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    vector<int> out;
    out.push_back(-1);
    stack<int> st;
    st.push(A[0]);
    for(int i=1;i<n;i++){
        if(A[i-1] < A[i]){
            out.push_back(A[i-1]);
            st.push(A[i]);
        }else{
            while(!st.empty()){
                if(st.top() < A[i]){
                    out.push_back(st.top());
                    break;
                }else{
                    st.pop();
                }
            }
            if(st.empty()) out.push_back(-1);
            st.push(A[i]);
        }
    }
    return out;
}
