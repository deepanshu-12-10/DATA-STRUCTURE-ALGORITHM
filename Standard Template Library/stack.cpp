
// Stack means arragement of elements where last in, comes first.
// jo ek laast me rkhi jaye wo sabse pahle pick hoti hai plates in shaadi

#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<string>s;
   s.push("love"); 
   s.push("barbbar");
   s.push("kumar");
   cout<<"top element :- "<<s.top()<<endl;
   cout<<"size of stack  :- "<<s.size()<<endl;
   s.pop();
   cout<<"top element :- "<<s.top()<<endl;
   cout<<"size of stack after :- "<<s.size()<<endl;
   cout<<"empty or not :- "<<s.empty()<<endl;

}