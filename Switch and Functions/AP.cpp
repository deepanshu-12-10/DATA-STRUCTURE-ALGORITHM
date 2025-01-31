#include<iostream>
#include<math.h>
using namespace std;
int AP(int i){
return (3*i + 7);
}
int main(){
    int n;
    cin>>n;
   int a= AP(n);
   cout<<"nth term will be "<<a<<endl;
}