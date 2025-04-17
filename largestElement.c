#include <stdio.h>

int main()
{
    int len, largestElement;
    // take input
    scanf("%d", &len);
    int arra[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arra[i]);
    }
    largestElement = arra[0];
    for (int i = 0; i < len; i++)
    {
        if (largestElement < arra[i])
        {
            largestElement = arra[i];
        }
    }
    printf("largest element: %d\n", largestElement);

    return 0;
}