#include <iostream>
#include <climits>
using namespace std;
int printmax(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],printmax(arr,n,idx+1));
}
int main(){
    int arr[]={5,4,3,100,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<printmax(arr,n,0);
}