#include<iostream>
#include<math.h>
using namespace std;
int bitset(int a, int b){
    int count =0;
    while(a>0 || b>0){
    if(a&1){
        count++;
    
    }
    if(b&1){
        count++;
    }
        a=a>>1;
        b=b>>1;
    }
    return count;
 }


int main(){
    int a;
    cout<<"enter the number 'a'"<<endl;
    cin>>a;
    int b;
    cout<<"enter the number 'b'"<<endl;
    cin>>b;
   int c= bitset(a,b);
   cout<<"the total number of set of bits"<< c<<endl;
}