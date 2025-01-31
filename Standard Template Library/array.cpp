#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};
    
    array<int,4> a = {1,2,3,4}; // here we write new array name "a".
    int size = a.size();   // here we found size of array name "a" by using this function.

    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }

    cout<<"Element at 2nd Index :- "<<a.at(2)<<endl;  //here we also use new predefined function to locate the position of an index.

    cout<<"Empty or not :- "<<a.empty()<<endl;   // here we use "empty function " to check the array is empty or not. It gives ouput in the form of "0" or "1" . here "0" means it's false , not empty and "1" means it's true, array is empty.

    cout<<"First Element :- "<<a.front()<<endl;  //here to find element in array "a".

    cout<<"last Element :-" <<a.back()<<endl;    //here to find last element in the array "a".
}