#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,p,k;
	     cin>>w>>p>>k;
	    int wood=min(w,k);
	    int plastic=k-wood;
	    int f;
	    f=2*wood+plastic;
	    cout<<f<<endl;
	}
return 0;
}
