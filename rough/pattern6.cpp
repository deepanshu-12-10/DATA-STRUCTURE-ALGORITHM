#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    int count =1;
    while (i<=n){
        int j=0;
        while(j<n){
            char ch='A' + i +j-1;
            cout<<ch<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}