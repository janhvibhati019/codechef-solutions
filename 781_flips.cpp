#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        if(sum%2!=0){
            cout<<-1<<endl;
        }
        else{
            cout<<abs(sum)/2<<endl;
        }
    }

}
