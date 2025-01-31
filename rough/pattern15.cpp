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
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}