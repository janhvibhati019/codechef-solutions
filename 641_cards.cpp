#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n==x){
	        cout<<n-x<<endl;
	    }
	    else if(n>x && (n-x)>x){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<n-x<<endl;
	    }
	    
	}
	return 0;
}
