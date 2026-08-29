#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int t1=a+c;
	    int t2=a+d;
	    int t3=b+c;
	    int t4=b+d;
	    int z;
	    z=max({t1,t2,t3,t4});
	    cout<<z<<endl;
	    
	}
	return 0;
}
