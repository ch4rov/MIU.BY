#include <stdio>
#include <locale.h>

int main()
{
 int d;
 float L, Pi = 3.14;
 setlocale(0, "rus"); //подключаем кириллицу (русский язык)
 printf("Введите диаметр окружности: ");
 scanf_s("%d", &d);
 L = Pi * d;
 printf("Длина окружности = %.2f\n", L);
 printf("Vopvet.Ru - учеба доступнее\n");
 getchar();
 getchar();
 return 0;
}