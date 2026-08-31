#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool prime=true;
	    if(n<=1){
	         prime=false;
	    }
	    else{
	        for(int i=2;i*i<=n;i++){
	            if(n%i==0){
	                prime=false;
	                break;
	            }
	        }
	    }
	    if(prime){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
}
