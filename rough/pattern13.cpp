#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces < i)
        {
            cout << " ";
            spaces++;
        }
        int j=n;
        while(j>=i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}