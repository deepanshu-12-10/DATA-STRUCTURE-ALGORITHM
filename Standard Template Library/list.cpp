#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> d;
 d.push_back(1); // here we stored the element "1"  in list "d" from back side . Basically Insertion from the Back side .  
    d.push_front(2); // here we stored the element "2" in list "d"  from front side . 
     cout<<"print d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    } cout<<endl;

     d.push_front(3); // here we stored the element "3" in list "d" from front side. Basically Insertion from the front side .
     d.push_back(0); // here we stored the element "0" in list "d" from back side. 
    cout<<"print the difference in insertion in d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    } cout<<endl;

    d.pop_back(); // here we remove the element "0" in list "d" from back side. Basically Deletion from the back Side.
    cout<<"print d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
 
    d.pop_front(); // here we remove the element "3" in list "d" from front side. Basically Deletion from the front side.
     cout<<"print difference after deletion in  d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
 

//  this task is not performed in list because you can't directly access the list like deque
//  cout<<"Element at 1st Index :- "<<d.at(1)<<endl;  //here we also use new predefined function "at()" to locate the position of an index.

    cout<<"Empty or not :- "<<d.empty()<<endl;   // here we use "empty function " to check the list is empty or not. It gives ouput in the form of "0" or "1" . here "0" means it's false , not empty and "1" means it's true, list is empty.

    cout<<"First Element :- "<<d.front()<<endl;  //here to find element in list "d".

    cout<<"last Element :-" <<d.back()<<endl;    //here to find last element in the list "d".
 
 cout<<"Before Erase size :- "<<d.size()<<endl;
 d.erase(d.begin(), d.end());       
 cout<<"after Erase size :- "<<d.size()<<endl;

 cout<<"after erase element"<<endl;
 for(int i:d){
    cout<<i<<" ";
 } cout<<endl;


}