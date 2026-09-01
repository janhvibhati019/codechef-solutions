#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int nums[n];

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
   int smallest=nums[0];
   for(int i=0;i<n;i++){
   if(nums[i]<smallest){
    smallest=nums[i];
   }
}
int largest=nums[0];
for(int i=0;i<n;i++){
    if(nums[i]>largest){
        largest=nums[i];
    }
   
}
   cout<<smallest<<endl;
   cout<<largest<<endl;
    return 0;
}