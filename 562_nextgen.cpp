#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int a,b,x,y;
         cin>>a>>b>>x>>y;
         int c,z;
         c=a*b;
         z=x*y;
         if(z>=c){
             cout<<"yes"<<endl;
         }
         else{
             cout<<"no"<<endl;
         }
     }
return 0;
}
