#include<iostream>
using namespace std;
int bintodecimal(int binnum){
    int ans=0,pow=1;
    while(binnum>0){
        int rem= binnum%10;
        ans += rem*pow;
        binnum=binnum/10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    int binnum;
    cout<<"enter the decimal numer"<<endl;
    cin>>binnum;
    int output= bintodecimal(binnum);
    cout<<"decimal numer = "<<output<<endl;
}