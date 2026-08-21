#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin>>t;
      while(t--){
          int b1,b2,b3;
          cin>>b1>>b2>>b3;
          int empty=0;
       if(b1==0) empty++;
       if(b2==0) empty++;
       if(b3==0) empty++;
       
       if(empty>=2){
           cout<<"water filling time"<<endl;
       }
       else{
           cout<<"not now"<<endl;
       }
      }
       return 0;
}