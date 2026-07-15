#include <stdio.h>

int main()
{
    int m;

    printf("Type your marks: ");
    scanf("%d", &m);

    if (m >= 40)
    {
        printf("You are PASS");
    }
    else
    {
        printf("You are FAIL");
    }

    return 0;
}