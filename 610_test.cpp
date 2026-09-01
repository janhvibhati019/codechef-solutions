#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int z=n*x;
	    if(z>=y && (y%x)==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
