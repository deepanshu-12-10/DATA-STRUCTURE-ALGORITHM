#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
         int spaces=n-i;
         while(spaces>0){
            cout<<" ";
            spaces--;
         }
         int j=n;
         while(j>0){
            cout<<"*";
         }
    }
}