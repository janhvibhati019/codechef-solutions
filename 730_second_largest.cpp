#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int M=max({a,b,c});
	    int m=min({a,b,c});
	    int second=a+b+c-M-m;
	    cout<<second<<endl;
	}
return 0;
}
