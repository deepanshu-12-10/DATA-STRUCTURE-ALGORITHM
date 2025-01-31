#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        //PRINT SPACES 
        int spaces=n-i;
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
        //PRINT FIRST HALF TRIANGLE 
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //PRINT SECOND HALF TRIANGLE
        int k=i-1;
        while(k>0){
            cout<<k;
            k--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}