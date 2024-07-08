#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==arr[(si+ei)/2]) continue;
        if(arr[i]<=pivotele) count++;
    }
    int pidx=count+si;
    swap(arr[(si+ei)/2],arr[pidx]);
    int i=si;
    int j=ei;
    while(i<pidx && j>pidx){
        if(arr[i]<pivotele) i++;
        else if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        } 
    }
    return pidx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}