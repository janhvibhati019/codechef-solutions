#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int y;
        y=(n/6)*x+x;
        if(n<=6){
            cout<<x<<endl;
        }
        else if(n%6==0){
            cout<<(n/6)*x<<endl;
        }
        else{
        cout<<y<<endl;
        }
    }
return 0;
}
