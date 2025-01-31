#include<iostream>
#include<math.h>
using namespace std;
int fibo(int n){
     int firstterm =0;
        int lastterm=1;
         int upcomimgterm;
    for(int i=3;i<=n;i++){
         upcomimgterm = firstterm + lastterm;
         firstterm= lastterm;
        lastterm= upcomimgterm;
    }
        return upcomimgterm;
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    cout<<"the number is "<<" "<<fibo(n)<<endl;
}