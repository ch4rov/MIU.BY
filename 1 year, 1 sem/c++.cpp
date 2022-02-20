#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float P = 3.14, n = 17, y;
    int a;
    cout << "Число P = 3.14/n";
    cout << "Число n = 17/n"; // Число n = номер варианта
    cout << "Введите a: /n";
    cin >> a;
    if ((P <= a) && (a > 0))
    {
        y = 2 * pow(sin(3 * P - 2 * a), 2);
    }
    if (P < a)
    {
        y = 1 / 4 - 1 / 4 * sin(5 / 2 * P - 8 * a) + n;
    }
    cout << "Ответ: " << y;
}

//void task2()
//{
//    setlocale(LC_CTYPE, "Russian");
//    int a, n, i;
//    for (int a, n, i;)
//    {
//    }
//}

// void main()
// {
//     std::cout << task1() << endl;
// }