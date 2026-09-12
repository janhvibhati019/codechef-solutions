#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int money=x*5+y*10;
        int result=money/z;
        cout<<result<<endl;
    }
return 0;
}
