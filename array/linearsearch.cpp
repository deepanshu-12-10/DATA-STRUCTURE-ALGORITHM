#include<iostream>
#include<math.h>
using namespace std;
int linearsearch(int arr[],int n,int k){
 for(int i=0;i<n;i++){
    if(arr[i]==k){
        return i;
    }
 }
 return 0;
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
    int k;
    cout<<"Enter the element you want to find out"<<endl;
    cin>>k;
  cout<<"the index will be"<<" "<<  linearsearch(arr,n,k)<<endl;

}