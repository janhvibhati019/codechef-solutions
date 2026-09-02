#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int fx=((x-1)/10)+1;
	    int fy=((y-1)/10)+1;
	    int final=abs(fx-fy);
	    cout<<final<<endl;
	}
return 0;
}
