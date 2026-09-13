#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=x*y;
	    if(x<=3){
	        cout<<a<<endl;
	    }
	    else if(x>3 && x%3==0){
	        cout<<a+z*(x-3)/3<<endl;
	    }
	    else{
	        cout<<a+z*(x/3)<<endl;
	    }
	}
return 0;
}
