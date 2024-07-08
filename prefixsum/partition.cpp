#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,10,10,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"it cannot be partitioned";
    else cout<<"it can be partitioned at "<<idx;
}