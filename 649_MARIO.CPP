#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int y=x%3;
	    if(y==0){
	        cout<<"normal"<<endl;
	    }
	    else if(y==1){
	        cout<<"huge"<<endl;
	    }
	    else{
	        cout<<"small"<<endl;
	    }
	}
return 0;
}
