#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int a,b,c,x;
         cin>>a>>b>>c>>x;
         if(x<=a+b || x<=a+c || x<=b+c){
             cout<<"yes"<<endl;
         }
         else{
             cout<<"no"<<endl;
         }
     }
return 0;
}
