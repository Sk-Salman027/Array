#include <stdio.h>
// array element swaping with assending order
int main()
{
    int arr[] = {10,3,5,78,8}, temp;
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {   // swaping element
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}