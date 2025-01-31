

// only input will be odd then its find correct unique number 

#include <iostream>
#include <math.h>
using namespace std;
int unique(int brr[], int n)
{
    // it is first method , click easily to do but it is not an efficient code so then we use second method :-
    int ans=0;                                                                // for(int i=0;i<n;i++){
    for (int i = 0; i < n; i++)
    {                                                                      //     int count =0;
        ans = ans^brr[i];                                               //         if(arr[i]==arr[j]){
    }                                                                     //     for(int j=0 ;j<n;j++){
    return ans;                                                          //             count++;
                                                                         //         }
                                                                         //     }
                                                                         //     if(count==1){
                                                                         //         return arr[i];
                                                                         //       }
                                                                         // }
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
    int c= unique(arr,n);
    cout << c << endl;
    // printarray(arr, n);
    cout << endl;
    int d= unique(brr,m);
    cout << d<< endl;
    // printarray(brr, m);
}