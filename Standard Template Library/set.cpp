
// there always get unique and sorted array .

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(0);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(0);
       
       cout<<"before erase :-"<< endl;
        for(int i :s){
            cout<<i<<" ";
          }cout<<endl;

          set<int>::iterator it = s.begin();
          it++;

          s.erase(it);

          cout<<"After Erase :- "<<endl;
          for(auto i :s){
            cout<<i<<" ";
          }cout<<endl;

          cout<<"5 is present or not :- "<<s.count(5)<<endl;   //this give a boolean answer.
          cout<<"-9 is present or not :- "<<s.count(-9)<<endl;

set<int>  :: iterator itr=s.find(5) ;
for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
} cout<<endl;

}