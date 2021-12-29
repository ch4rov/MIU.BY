#include <stdio.h>

int min3(int v1, int v2, int v3);

int main()
{
    int x1,x2,x3,x4,x5;

    printf("x1: ");
    scanf("%d", &x1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("x3: ");
    scanf("%d", &x3);
    printf("x4: ");
    scanf("%d", &x4);
    printf("x5: ");
    scanf("%d", &x5);
    
    printf("%d ot %d or %d = %d\n", x1,x2,x3, min3(x1,x2,x3));
    printf("%d ot %d or %d = %d\n", x4,x2,x3, min3(x4,x2,x3));
    printf("%d ot %d or %d = %d\n", x4,x5,x3, min3(x4,x5,x3));
    return 0;
}

int min3(int v1, int v2, int v3)
{
    int min = v1;

    if (v2 < min)
        min = v2;

    if (v3 < min)
        min = v3;

    return min;
}