#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int y,z;
	    y=x/10;
	    z=x%10;
	    if(z==5 || z==0){
	        cout<<y+(z/5)<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
return 0;
}
