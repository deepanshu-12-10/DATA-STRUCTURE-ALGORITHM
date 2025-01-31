// there are two types of maps :- ordered map and unordered map.
// ordered map are already default and givve in sorted forms.

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;

    m[1] = "Barrbar";
    m[13] = "kumar";
    m[2] = "love";
    m[15]="deep";
    m.insert({5,"bheem"});

    cout<<"before erase" <<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13 :- "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"afterr erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

 auto it = m.find(5);

 for(auto i = it;i!=m.end();i++){
    cout<<(*i).first<<endl;
 }
}