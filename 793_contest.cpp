#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string N;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            cin>>N;
            if(N=="START38"){
                count1++;
            }
            else{
                count2++;
            }
        }
        cout<<count1<<" "<<count2<<endl;
    }
return 0;
}
