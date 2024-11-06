#include<iostream>
using namespace std;
int dectobin(int dec){
    int ans=0;
    int pow=1;
    while(dec>0){
     int rem=dec%2;
     dec=dec/2;
     ans= ans+(rem*pow);
     pow=pow*10;
    }
    return ans;
}
int main(){
    int dec;
    cout<<"enter the number";
    cin>>dec;
    int output= dectobin(dec);
    cout<<"dectobin"<<" "<<output;
}