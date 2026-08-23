#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int z=n-x;
	    if(n<x){
	        cout<<"0"<<endl;
	    }
	    else{
	    if(z%4==0){
	        cout<<z/4<<endl;
	    }
	    else{
	        cout<<(z/4)+1<<endl;
	    }
	    }
	}
}
