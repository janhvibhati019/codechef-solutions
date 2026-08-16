#include <bits/stdc++.h>
using namespace std;

int main() {
        int n,m,k;
        cin>>n>>m>>k;
        int count = 0;
        k = k+1;
        for(int i = 0; i<n; i++){
            
            vector<int>v(k);
            for(int j = 0; j<k; j++){
                cin>>v[j];
            }
            
            int question  = v[k-1];
            
            
            
            int sum = 0;
            for(int j = 0; j<k-1; j++){
                sum+=v[j];
            }
           // cout<<sum<<endl;
            if(sum >= m && question <= 10) count++;
            
        }
        
        cout<<count<<endl;
        
        
        

}
