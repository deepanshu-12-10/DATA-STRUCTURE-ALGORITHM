#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //print first half numeric numbers
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        //print first half stars
        int spaces=i-1;
        while(spaces>0){
            cout<<"*";
            spaces--;
        }
        //print second half stars
        int l=i-1;
        while(l>0){
            cout<<"*";
            l--;
        }
        // print second half numeric numbers
        int k=n-i+1;
        while(k>0){
            cout<<k;
            k--;

        }
        i++;
        cout<<endl;
    }
    return 0;
}