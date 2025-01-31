#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);

    cout<<"finding 6 :- "<<binary_search(v.begin(),v.end(), 6)<<endl;
      cout<<"finding 2 :- "<<binary_search(v.begin(),v.end(), 2)<<endl;
       
       cout<<"lower bound :- "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
       cout<<"upper bound :- "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

       int a=3,b=5;
       cout<<"max :- "<<max(a,b);
       cout<<"min :- "<<min(a,b);

       swap(a,b);
       cout<<endl<<"a :- "<<a<<endl;

       string s= "abcd";
       cout<<"string :- "<<s<<endl;
       reverse(s.begin(),s.end());
       cout<<" reverse string :- "<<s<<endl;

       rotate(s.begin(),s.begin()+1,s.end());
       cout<<"rotate string :- "<<s<<endl;

       rotate(v.begin(),v.begin()+1,v.end());
       cout<<"after rorate"<<endl;
       for(int i:v){
        cout<<i<<" ";
       }
      cout<<endl<<"sort array :- "<<endl;
       sort(v.begin(),v.end());
       for(int i:v){
        cout<<i<<" ";
       }
}