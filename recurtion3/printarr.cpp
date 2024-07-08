#include <iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(n==idx) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
    int arr[]={5,4,3,2,1,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}