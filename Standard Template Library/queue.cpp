// Queue means arragement of elements where First in , first out.
// jo shaadi me pahle aayega wo pahle hi shahi parneer khayega.

#include<iostream>
#include<queue>
using namespace std;
int main(){

 queue<string>s;
   s.push("love"); 
   s.push("barbbar");
   s.push("kumar");
   cout<<"first element :- "<<s.front()<<endl;
   cout<<"size of stack  :- "<<s.size()<<endl;
   s.pop();
   cout<<"first element :- "<<s.front()<<endl;
   cout<<"size of queue after :- "<<s.size()<<endl;
   cout<<"empty or not :- "<<s.empty()<<endl;



}
