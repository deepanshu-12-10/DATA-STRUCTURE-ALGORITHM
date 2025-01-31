#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
      int j=0;
      int ans1=0;
      if( n ==0 ){
        cout<<"1";
      }
      else{
    while(n != 0){
        int bit = n & 1;
        if(bit ==0 ){
            bit =1;
  ans = (bit  * pow(10,i)) + ans;
  i++;
        } else if (bit == 1){
            bit =0 ;
            ans = (bit  * pow(10,i) ) + ans;
            i++;
        }
      n= n >> 1;

      }
    
      while(ans != 0 ){
     int    digit = ans %10;
      ans1 = (digit * pow(2,j)) + ans1;
      j++;
      ans = ans/10;

      }
      cout<< ans1<<endl;
    }
}