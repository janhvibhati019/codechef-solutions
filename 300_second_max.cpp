#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int maxi=max({a,b,c});
	    int mini=min({a,b,c});
	    int second_max=a+b+c-maxi-mini;
	    cout<<second_max<<endl;
	}
return 0;
}
