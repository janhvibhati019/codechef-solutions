#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int x,a,b;
	cin>>x>>a>>b;
	int z=a+2*b;
	if(z>=x){
	    cout<<"Qualify"<<endl;
	}
	else{
	    cout<<"NOTQUALIFY"<<endl;
	}
    }
return 0;
}
