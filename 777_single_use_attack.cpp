#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    int z=h-y;
	    int a=z/x;
	    if(z%x==0){
	        cout<<a+1<<endl;
	    }
	    else{
	        cout<<a+2<<endl;
	    }
	}
return 0;
}
