#include <stdio.h>
#include <string.h>
// character element swaping with assending
int main()
{
    char s[10];
    char temp;
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("%s", s);
}