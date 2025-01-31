#include <iostream>
#include <math.h>
using namespace std;
void intersection(int arr[], int brr[],int m, int n)
{
int crr[100];
int count=0;
int l=0;
    for(int i=0;i<n;i++){
        for(int j=0 ;j<n;j++){
    if(arr[i]==brr[j]){
        crr[l]=arr[i];
        l++;
        count++;
    }
    }
}
for(int i=0;i<count;i++){
    cout<<crr[i]<<" ";
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
   intersection(arr,brr,m,n);
}