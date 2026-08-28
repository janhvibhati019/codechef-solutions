#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x,y;
	    x=a*10;
	    y=b*5;
	    if(x>y){
	        cout<<"first"<<endl;
	    }
	    else if(y>x){
	        cout<<"second"<<endl;
	    }
	    else{
	        cout<<"any"<<endl;
	    }
	}
	return 0;
}
