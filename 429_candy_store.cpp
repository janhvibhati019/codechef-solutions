#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y;
        z=y-x;
        if(y<=x){
            cout<<y<<endl;
        }
        else{
            cout<<x+(z*2)<<endl;
        }
    }
	

}
