#include<iostream>
using namespace std;
int lrg(int arr[],int n){
    int lr=arr[n-1];
    cout<<"leaders are"<<lr<<" ";

    for(int i=n-2;i>=0;i--){
        if(lr<arr[i]){
            lr=arr[i];
            cout<<lr<<endl;
        }
       
    }
}
int main(){
    int arr[]={1,4,6,2,5,113,56};
    int n=7;
    lrg(arr,n);
    
}
