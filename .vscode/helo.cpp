#include<iostream>
using namespace std;
void reverse(int i,int j,int arr[]){
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[]={3,4,2,5,6,7};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(0,n-k-1,arr);
    reverse(n-k,n-1,arr);
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}