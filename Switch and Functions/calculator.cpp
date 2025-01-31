#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation"<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
        break;
        case '-': cout<<(a-b)<<endl;
        break;
        case '*': cout<<(a*b)<<endl;
        break;
        case '/': cout<<(a/b)<<endl;
        break;
        case '%': cout<<(a%b)<<endl;
        break;
    }
}
