
// Vector is dynamic memory , it automatically increase the memory by doubling it

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> a(5,1);  // intialize the vector "a" having size of "5" and every element also be "1";
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    } cout<<endl;
 
    
    vector<int> last(a);  // initialize vector "last" and size , elements are copy from vector "a". Basically it a copy of vector "a".
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    } cout<<endl;
 

    vector<int> v; // initialize a vector "v".
    cout<<"Capacity :- "<<v.capacity()<<endl;  // "capacity" function used to tell about the memory used bby vector "v".

    v.push_back(1); // by "push_back()" function we stored the element "1" in vector "v".  In short we call "Insertion".
    cout<<"Capacity :- "<<v.capacity()<<endl;

     v.push_back(2); // by "push_back()" function we stored the element "2" in vector "v".
    cout<<"Capacity :- "<<v.capacity()<<endl;

     v.push_back(3); // by "push_back()" function we stored the element "3" in vector "v".
    cout<<"Capacity :- "<<v.capacity()<<endl; // capacity humhe btata hai ki elements ke liye kitni memory assign hai (byte,kb,mb,etc. type space)
    cout<<"size :- "<<v.size()<<endl;  // size humhe batata hai ki kitne elements present hai vector me.

     cout<<"Element at 2nd Index :- "<<v.at(2)<<endl;  //here we also use new predefined function "at()" to locate the position of an index.

    cout<<"Empty or not :- "<<v.empty()<<endl;   // here we use "empty function " to check the vector is empty or not. It gives ouput in the form of "0" or "1" . here "0" means it's false , not empty and "1" means it's true, vector is empty.

    cout<<"First Element :- "<<v.front()<<endl;  //here to find element in vector "a".

    cout<<"last Element :-" <<v.back()<<endl;    //here to find last element in the vector "a".

    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();   //"pop_back" function is used to remove the last element from vector "v". In short  we call " Deletion".

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
 

     cout<<"before clear size :- "<<v.size()<<endl;
     v.clear();
     cout<<"after clear size :- "<<v.size()<<endl; //here after using "clear()" function , size means elements in vector would be zero. but capacity means memory assign for vector "v" will be remain same.


    }