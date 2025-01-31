#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    cout<<"enter the amount"<<endl;
    cin>>n;
    int x,y,z,c;
    switch (n){
        case 1: x= n/100;
                 n=n-(x*100);
        case 2: y = n/50;
                 n = n - (y*50);
        case 3: z = n/20;
                 n = n - (z*20);
        case 4: c= n/1;
                 n = n -(c*1);
            
    }
          cout<<x+y+z+c<<endl;

}