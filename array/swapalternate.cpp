#include <iostream>
#include <math.h>
using namespace std;
/* that also correct but below we run more efficient code
void swapalternate(int arr[], int n)
{
    int start = 0;
    int end = 1;
    if(n%2==0){
    while (start <n)
    {
        swap(arr[start], arr[end]);
        start=end+1;
        end=start+1;
    }
    } else{
        while (start <n-1)
    {
        swap(arr[start], arr[end]);
        start=end+1;
        end=start+1;
    }
    }
}*/
void swapalternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
             swap(arr[i],arr[i+1]);
        }
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
    swapalternate(arr, n);
    printarray(arr, n);
    cout << endl;
    swapalternate(brr, m);
    printarray(brr, m);
}