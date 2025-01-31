// Array doesnot have dynamic memory so we use vector.
// In vector , dynamic memory creates and increase by doubling the previous memory automatically
// Now we Deque , here dynamic memory will be allocate annd also we inert & delete the elements from front as well as back side.
// deque doing both insertion and deletion.

#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d; //Intialize the deque "d".

    d.push_back(1); // here we stored the element "1"  in deque "d" from back side . Basically Insertion from the Back side .  
    d.push_front(2); // here we stored the element "2" in deque "d"  from front side . 
     cout<<"print d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    } cout<<endl;

     d.push_front(3); // here we stored the element "3" in deque "d" from front side. Basically Insertion from the front side .
     d.push_back(0); // here we stored the element "0" in deque "d" from back side. 
    cout<<"print the difference in insertion in d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    } cout<<endl;

    d.pop_back(); // here we remove the element "0" in deque "d" from back side. Basically Deletion from the back Side.
    cout<<"print d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
 
    d.pop_front(); // here we remove the element "3" in deque "d" from front side. Basically Deletion from the front side.
     cout<<"print difference after deletion in  d"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
 

  cout<<"Element at 1st Index :- "<<d.at(1)<<endl;  //here we also use new predefined function "at()" to locate the position of an index.

    cout<<"Empty or not :- "<<d.empty()<<endl;   // here we use "empty function " to check the deque is empty or not. It gives ouput in the form of "0" or "1" . here "0" means it's false , not empty and "1" means it's true, deque is empty.

    cout<<"First Element :- "<<d.front()<<endl;  //here to find element in deque "d".

    cout<<"last Element :-" <<d.back()<<endl;    //here to find last element in the deque "d".
 
 cout<<"Before Erase :- "<<d.size()<<endl;
 d.erase(d.begin(),d.begin()+1);
 cout<<"after Erase :- "<<d.size()<<endl;

 cout<<"after erase"<<endl;
 for(int i:d){
    cout<<i<<" ";
 } cout<<endl;

}
