#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(char &x:s){
	        if(x=='A'){
	            x='T';
	        }
	        else if(x=='T'){
	            x='A';
	        }
	        else if(x=='C'){
	            x='G';
	        }
	        else if(x=='G'){
	            x='C';
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
