#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int l_digit;
	    int f_digit;
	    int sum;
	    cin>>n;
	    l_digit=n%10;
	    while(n>=10){
	        n=n/10;
	    }
	     f_digit=n;
	    sum=f_digit+l_digit;
	    cout<<sum<<endl;   
	}
	return 0;
}

