#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int x,y,z;
         cin>>x>>y>>z;
         int n=x*y;
         if(n/2<z){
             cout<<"yes"<<endl;
         }
         else{
             cout<<"no"<<endl;
         }
     }
   return 0;
}
