void swap(int *x, int *y){
	int *temp=x;
	x=y;
	y=temp;
}

void validIP(int *arr, int len, vector<string> &out){
	int flag1=0, flag2=0, flag3=0, flag4=0;
	for(int i=0;i<len-3;i++){
	    //cout<<"**"<<endl;
		int num1= 0, flag1=0;
		if(i>0 && arr[0]==0) continue; //for the zero case
		for(int k=0;k<=i; k++) num1= num1*10 + arr[k];
		if(num1 >255 || num1 <0)flag1=-1;
		for(int j=i+1;j<len-2;j++){
		    //cout<<"**"<<endl;
			int num2=0, flag2=0;
			if(j>i+1 && arr[i+1]==0) continue;
			for(int k=i+1;k<=j; k++) num2= num2*10 + arr[k];
			if(num2>255 || num2<0)flag2=-1;
			for(int l=j+1;l<len-1;l++){
			    //cout<<"**"<<endl;
				int num3= 0, flag3=0, flag4=0;
				if(l>j+1 && arr[j+1]==0) continue;
				for(int k=j+1;k<=l; k++) num3= num3*10 + arr[k];
				if(num3>255|| num3<0)flag3=-1;
				int num4= 0;
				if(l+1 < len-1 && arr[l+1]==0) continue;
				for(int k=l+1;k<len; k++) num4= num4*10 + arr[k];
				if(num4>255 || num4<0)flag4=-1;
				
				if(flag1== -1 || flag2==-1 || flag3== -1 || flag4==-1) continue;
				else{
				    //cout<<"**"<<endl;
					//cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
					string temp=to_string(num1)+"."+to_string(num2)+"."+to_string(num3)+"."+to_string(num4);
					out.push_back(temp);
					//count++;
				} 
			}
		}
	}
}


vector<string> Solution::restoreIpAddresses(string A) {
    int n=A.length();
    int arr[n];
    vector<string> out;
    for(int i=0;i<n;i++) arr[i]= A[i]-'0';
    validIP(arr, n, out);
    return out;
}
