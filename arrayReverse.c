#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, temp;
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0, j = len - 1; i < len/2; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}