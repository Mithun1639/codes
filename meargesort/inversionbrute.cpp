#include <iostream>
#include<vector>
using namespace std;
int main(){
    int count=0;
    int arr[]={5,4,6,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) count++;
        }
    }
    cout<<count;
}