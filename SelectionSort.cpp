// C++ implementation to print
// the counter clock wise
// spiral traversal of matrix
#include <iostream>
using namespace std;
 

void printarray(int *a, int n) 
{
    cout << '\n';
    for(int i = 0; i < n ; i++)
    {
        cout << a[i] << '\t';
    }
} 

void swap(int &a1, int &a2)
{
    int tmp;
    tmp = a1;
    a1 = a2;
    a2 = tmp;
}    
       

void SelectionSort(int *a, int n) 
{
    int minIndex = 0;
    for (int i = 0; i < n-1 ; i++)
    {
        minIndex = i;
        for (int j = i+1; j < n ; j++)
        {
            if(a[minIndex] > a[j]) 
            {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
        printarray(a,n);
    }
}

int main ()
{
    
    int array[] = {5,1,3,2,4};

    printarray(array, sizeof(array)/sizeof(array[0]));

    SelectionSort(array, sizeof(array)/sizeof(array[0]));
    
    return 0;
}

