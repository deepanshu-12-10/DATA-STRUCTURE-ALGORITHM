/* Write a function that takes an unsigned integer and returns the number of '1' bits .it has also known as the Hamming weight.
 example : input:- 0000000000000001011
     //   output:- 3
 example : input:- 00001001010001100
          output:- 5
          */

#include<iostream>
using namespace std;
int main(){
    int unsigned n;
    cin>>n;
    int count =0;
    while(n!=0){
     if(n&1){
        count++;
     }
     n=n>>1;
    }
    return count;
}