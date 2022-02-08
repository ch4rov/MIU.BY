// 1. Дан диаметр окружности d. Найти ее длину L = πd. Взять π = 3.14.
#include <stdio.h>
#include <locale.h>

int main()
{
 int d; // Диаметр окружности
 float L, P = 3.14; // Длина окружности и число пи (3.14)
 setlocale(0, "rus"); // Эта параша как всегда не работает, поэтому напишу транслитом.
 printf("Enter diameter of circle: ");
 scanf("%d", &d);
 L = P * d;
 printf("Dlina okruzhnosti = %.2f\n", L);
 getchar();
 getchar();
 return 0;
}