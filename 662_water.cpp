#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    int z=k/x;
	    if(z<=n){
	        cout<<z<<endl;
	        }
	    else{
	        cout<<n<<endl;
	    }
	}
}
