#include<iostream>
using namespace std;
int No_of_occurance(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    
    }
return count;
}
int main(){
    int arr[]={1,2,4,6,2,4,6,2,5,2};
    int n=10;
    int x=2;
    int index=No_of_occurance(arr,n,x);
    cout<<"Number "<<x<<" is occur"<<index<<" times";
}
