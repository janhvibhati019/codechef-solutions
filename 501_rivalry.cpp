#include <bits/stdc++.h>
using namespace std;

int main() {
	int r1,r2;
	cin>>r1>>r2;
	int d1,d2;
	cin>>d1>>d2;
	int a,b;
	a=r1+d1;
	b=r2+d2;
	if(a>b){
	    cout<<"Dominater"<<endl;
	}
	else{
	    cout<<"Everule"<<endl;
	}
	return 0;
}
