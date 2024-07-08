#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int idx=-1;
    int presum=0;
    for(int i=0;i<k;i++){
        presum+=arr[i];
    }
    int i=1;
    int j=k;
    int currsum=0;
    int maxsum=INT_MIN;
    while(j<n){
        currsum=presum+arr[j]-arr[i-1];
        if(maxsum<currsum){
            maxsum=currsum;
            idx=i;
        }
        presum=currsum;
        i++;
        j++;
    }
   
    cout<<maxsum<<endl;
    cout<<idx;
}