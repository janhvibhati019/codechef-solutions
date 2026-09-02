#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	   int a=min(a1,min(a2,a3));
	   int b=min(b1,min(b2,b3));
	   int x=a1+a2+a3-a;
	   int y=b1+b2+b3-b;
	   if(x>y){
	       cout<<"alice"<<endl;
	   }
	   else if(x==y){
	       cout<<"tie"<<endl;
	   }
	   else{
	       cout<<"bob"<<endl;
	   }
	  
	}
return 0;
}
