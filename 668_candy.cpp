#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int z=n/m;
        if((n%m==0) && (n/m)%2==0){
          cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        
        }
    }
return 0;
}
