#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        // int v=i;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}