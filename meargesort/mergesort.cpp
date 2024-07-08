// #include <iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i=0,j=0,k=0;
//     // int n1=a.size();
//     // int n2=b.size();
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]){
//             res[k]=a[i];
//             k++;
//             i++;
//         }
//         else{
//             res[k]=b[j];
//             k++;
//             j++;
//         }
//     }
//     if(i==a.size()){
//         while(j<b.size()){
//             res[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//      if(j==b.size()){
//         while(i<a.size()){
//             res[k]=a[i];
//             i++;
//             k++;
//         }
//     }
// }
// void mergesort(vector<int>& v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=(n/2);
//     int n2=(n-(n/2));
//     vector<int> a(n1),b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[i+n1];
//     }
//     // recursion
//     mergesort(a);
//     mergesort(b);

//     merge(a,b,v);
// }
// int main(){
//     int arr[]={5,1,3,0,4,9,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergesort(v);
//      for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }


// }




#include <iostream>
#include<vector>
using namespace std;
int c =0;
int inversion(vector<int>& a,vector<int>& b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&& j<b.size()){
        if(a[i]<b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
     if(j==b.size()){
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
void mergesort(vector<int>& v){
    int n=v.size();
    if (n==1) return;
    int n1=n/2;
    int n2=n-(n/2);
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    c+= inversion(a,b);

    merge(a,b,v);
    a.clear();//it will delete the used array in recursion and improves space complexity
    b.clear();
}
int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    mergesort(v);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    cout<<c;

}
