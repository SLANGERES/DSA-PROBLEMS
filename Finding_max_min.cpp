#include<iostream>
using namespace std;
int search(int a[],int n){
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
        
    }
    cout<<"min is -"<<min;
    cout<<"max is -"<<max;
    
    
}
int main (){
    int arr[]={3, 2, 1, 56, 1000, 167};
    int n=6;
    search(arr,n);
}