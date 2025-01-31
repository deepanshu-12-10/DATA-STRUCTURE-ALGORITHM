#include<iostream>
#include<math.h>
using namespace std;
int printsum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum= arr[i]+sum;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<<"sum"<< " "<<  printsum(arr,n)<<endl;
}