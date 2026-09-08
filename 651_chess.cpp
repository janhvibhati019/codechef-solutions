#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int z=y-x;
	    if(y>x){
	        if(z<=8){
	            cout<<"1"<<endl;
	        }
	        else{
	        cout<<((z+7)/8)<<endl;
	        }
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
return 0;
}
