#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int spaces = n - i;
        while (spaces > 0)
        {
            cout << " ";
            spaces--;
        }
        int j = n - i + 1;

        while (j <= n)
        {
            cout << count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}