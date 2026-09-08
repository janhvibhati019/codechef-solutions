#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
		while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int r=log2(n);
	    int duration=r*a;
	    int breakk=(r-1)*b;
	    int final=duration+breakk;
	    cout<<final<<endl;
	}
	return 0;
}
