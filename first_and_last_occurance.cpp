#include<iostream>
using namespace std;
int occur(int arr[],int n,int x){
    int first=0;
    int end=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            first=i;
            break;
        }

    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            end=i;
            break;
        }

    }
    cout<<"first ocuur "<<first;
    cout<<"last occur "<<end;
}
int main(){
    int arr[]={1,2,2,2,2,2,3};
    int n=7;
    int x=2;
    occur(arr,n,x);
}
