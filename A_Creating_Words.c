#include <stdio.h>

int main()
{
    char ar[5], arr[5];
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s%s", ar, arr);
        char temp;
        temp = ar[0];
        ar[0] = arr[0];
        arr[0] = temp;

        printf("%s %s\n", ar, arr);
    }

    return 0;
}