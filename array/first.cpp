#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int x;
    cout<<"enter the value you want put in all arrray indexes"<<endl;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
          arr[i]=x;
    }
    for(int i =0; i<n;i++){
        cout<<arr[i];
    }
    return 0;
}