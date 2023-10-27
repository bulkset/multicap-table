#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", i, num, i * num);
    }
    return 0;
}