//
//
// Ввести 5 чисел x1, x2, x3, x4, x5 и определить минимальное и максимальное из x1, x2, x3;
// из x4, x2, x3; из x4, x5, x3. Использовать 2 функции, 1-я получает 3 числа и возвращает
// минимальное из них, 2-я получает 3 числа и возвращает максимальное из полученных
// чисел.
//
//
#include <stdio.h>

int min3(int i1, int i2, int i3);
int max3(int a1, int a2, int a3);

int main()
{
    int x1,x2,x3,x4,x5;
        printf("Enter x1: ");
        scanf("%d", &x1);
        printf("Enter x2: ");
        scanf("%d", &x2);
        printf("Enter x3: ");
        scanf("%d", &x3);
        printf("Enter x4: ");
        scanf("%d", &x4);
        printf("Enter x5: ");
        scanf("%d", &x5);

        // Вывод минимальных из трех чисел.
        printf("%d ot %d or %d = %d\n", x1,x2,x3, min3(x1,x2,x3));
        printf("%d ot %d or %d = %d\n", x1,x2,x3, min3(x4,x2,x3));
        printf("%d ot %d or %d = %d\n", x1,x2,x3, min3(x4,x5,x3));
        // Вывод максимальных из трех чисел
        printf("%d ot %d or %d = %d\n", x1,x2,x3, max3(x1,x2,x3));
        printf("%d ot %d or %d = %d\n", x1,x2,x3, max3(x4,x2,x3));
        printf("%d ot %d or %d = %d\n", x1,x2,x3, max3(x4,x5,x3));
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

int max3(int v1, int v2, int v3)
{
    int max = v1;
    if (v2 > max)
        max = v2;
    if (v3 > max)
        max = v3;
    return max;
}
