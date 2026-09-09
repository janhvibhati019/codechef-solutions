#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        int z=k*m;
        if(z>=n){
            cout<<1<<endl;
        }
        else if(n%z!=0){
            cout<<(n/z)+1<<endl;
        }
        else{
            cout<<n/z<<endl;
        }
    }
    return 0;
}
