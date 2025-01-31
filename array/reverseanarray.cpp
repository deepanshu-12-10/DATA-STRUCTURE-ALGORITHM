#include <iostream>
#include <math.h>
using namespace std;
void reversearray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int n;
    cout << "enter the size of array 1 " << endl;
    cin >> n;
    int arr[100];
    cout << "enter the array 1 " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "enter the size of array 2 " << endl;
    cin >> m;
    int brr[100];
    cout << "enter the array 2 " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    reversearray(arr, n);
    printarray(arr, n);
    cout << endl;
    reversearray(brr, m);
    printarray(brr, m);
}