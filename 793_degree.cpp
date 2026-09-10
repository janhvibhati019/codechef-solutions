#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    int ans=0;
	    int arr(n);
	    for(int i=0;i<n;i++){
	        cin>>x;
	        if(x!=0){
	           ans=i;
	        }
	    }
	    cout<<ans<<endl;
	}
return 0;
}
