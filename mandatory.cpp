// 1) Mandatory Task :–
// Run any C/C++/Java/Python code (except basic hello world/adding number etc. programs). Be as creative as possible with the program you choose. Create a GitHub repository with the code and a documentation file of the code (explain your code in it).

/* Function to sort an array using insertion sort*/

#include <bits/stdc++.h>
using namespace std;
 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
    int n;
    cout<<"Enter size of array and the array "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
 
