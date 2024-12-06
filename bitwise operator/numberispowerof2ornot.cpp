#include<iostream>
using namespace std;
bool powerof(int num){
    int pow=1;
    while(num>=pow){
        if(num/pow==1){
            
            cout<<num<<endl;
            cout<<pow<<endl;
            return true;
        }else {
         pow=pow*2;
        }
    }
    return false;
}
int main(){
    int num;
    cin>>num;
    powerof(num);
    cout<<powerof(num);
}