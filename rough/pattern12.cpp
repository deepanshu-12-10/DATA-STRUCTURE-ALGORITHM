#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        while(j>0){
            cout<<"*";
            j--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}