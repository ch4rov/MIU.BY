#include <iostream>
#include <math.h>
#include "locale.h"

using namespace std;

// 1. Ввести целое неотрицательное число. Посчитать факториал данного числа.
void task1() 
{
    int number, i, f = 1;
    setlocale(0, "rus");
    cout << "Введите целое неотрицательное число: ";
    cin >> number;
    
    for(i = 2; i <= number; i++) 
    {
        f *= i;
    }
    
    cout << "Факториал: " << f;
}

// ========================================================================== //

// 2. Введите два числа. Первое число x — основание, второе число n — степень. Посчитать x(n степени).
void task2() 
{
    int x, n;
    setlocale(0, "rus");
    cout << "Введите основание: ";
    cin >> x;
    
    cout << "Введите степень: ";
    cin >> n;
    
    cout << "Вычисление: " << pow(x, n);
}

// ========================================================================== //

// 3. Ввести натуральное N. Используя один цикл, найти сумму 1! + 2! + · · · + N!. 
// Чтобы избежать целочисленного переполнения, проводить вычисления с помощью вещественных переменных.
void task3() 
{
    int N, i;
    float s = 0, f = 1;
    setlocale(0, "rus");
    cout << "Введите N: ";
    cin >> N;
    
    for(i = 1; i <= N; i++) 
    {
        f *= i;
        
        s += f;
    }
    
    cout << "Вычисление: " << s;
} 

// ========================================================================== //

// 4. Введите целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно, 
// при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится три раза).
void task4() 
{
    int A, B, i, k;
    setlocale(0, "rus");
    cout << "Введите A: ";
    cin >> A;
    
    cout << "Введите B: ";
    cin >> B;
    
    for(i = A; i <= B; i++) 
    {
        for(k = 1; k <= i; k++) 
        {
            cout << i;
        }
    }
}

// ========================================================================== //

// 5. Ввести целое число и определить, является ли данное число совершенным или нет. Целое число является совершенным, 
// если его сомножители, включая 1 (но не само число), в сумме дают это число. Например, 6 — это совершенное число, так как 6 = 1 + 2 + 3.
void task5() 
{
    int number, i, s;
    setlocale(0, "rus");
    cout << "Введите число: ";
    cin >> number;
    
    for(i = 1; s < number; i++) 
    {
        s += i;
    }
    
    if(s == number) 
    {
        cout << "Число является совершенным!";
    } else 
    {
        cout << "Число не является совершенным";
    }
}

// ========================================================================== //

// 6. Вывести все простые числа в интервале от 2 до 10000.
void task6() 
{
    int count = 0, i, k;
    
    for(i = 2; i < 10000; i++) 
    {
        for(k = 2; k <= i; k++) 
        {
            if(i % k == 0) 
            {
                count += 1;
            }
        }
        
        if(count == 1) {
            cout << i << endl;
        }
        
        count =  0;
     }
}

// ========================================================================== //

// 7. Посчитать: количество нечетных, отрицательных чисел и произведение всех положительных чисел, ввод чисел завершается, когда вводим 0.
void task7() 
{
    int number, less = 0, p = 1;
    setlocale(0, "rus");
    while(true) 
    {
        cout << "Введите число: ";
        cin >> number;
        
        if(number % 2 != 1 && number < 0) 
        {
            less += 1;
        }
        
        if(number > 0) 
        {
            p *= number;
        }
        
        if(number == 0) 
        {
           break; 
        }
    }
    
    cout << "Количество отрицательных, нечетных чисел: " << less << endl;
    cout << "Произведение положительных чисел: " << p;
}

// ========================================================================== //

// 8. Вводим числа, ввод чисел заканчивается 0. Посчитать, сколько раз вводилось каждое из следующих чисел: −10, 5, 25 и 100.
void task8() 
{
    int number, five = 0, ten = 0, twentyFive = 0, hundred = 0;
    setlocale(0, "rus");
    while(true) 
    {
        cout << "Введите число: ";
        cin >> number;
        
        if(number == 5) 
        {
            five += 1;
        }
        
        if(number == 10) 
        {
            ten += 1;
        }
        
        if(number == 25) 
        {
            twentyFive += 1;
        }
        
        if(number == 100) 
        {
            hundred += 1;
        }
        
        if(number == 0) {
           break; 
        }
    }
    
    cout << "5 вводилось следующее количество раз: " << five << endl;
    cout << "10 вводилось следующее количество раз: " << ten << endl;
    cout << "25 вводилось следующее количество раз: " << twentyFive << endl;
    cout << "100 вводилось следующее количество раз: " << hundred;
}

// ========================================================================== //

// 9. Программа, которая находит наименьшее из нескольких вещественных чисел. Предполагается, что первое введенное число задает количество последующих вводимых чисел.
void task9() 
{
    int i;
    float number, min = 0, current;
    setlocale(0, "rus");
    cout << "Количество чисел: " << endl;
    cin >> number;
    
    min = number;
    
    for(i = 0; i < number;i++) {
        cout << "Введите число: " << endl;
        cin >> current;
        
        if(current < min) 
        {
            min = current;
        }
    }
    
    cout << "Минимальное число: " << min;
}

// ========================================================================== //

// 10. Ввести целое число и посчитать сумму и произведение цифр данного числа.
void task10() 
{
    int number, p = 1, s = 0;
    setlocale(0, "rus");
    cout << "Число: " << endl;
    cin >> number;
    
    while(number != 0) 
    {
        s += number % 10;
        p *= number % 10;
        
        number /= 10;
    }
    
    cout << "Сумма чисел: " << s << endl;
    cout << "Произведение чисел: " << p;
}

// ========================================================================== //

// 11. Вводим попеременно числа и вводим символы (+, -, *, /, =). Ввод завершается при вводе символа =. Программа считает и выводит результат введенного выражения.
void task11() 
{
    int number, count;
    char sign;
    
    while(true) 
    {
        if(sign == '+') 
        {
            count += number;
        } 
        else if(sign == '-') 
        {
            count -= number;
        } 
        else if (sign == '*') 
        {
            count *= number;
        } 
        else if (sign == '/') 
        {
            count /= number;
        } 
        else if (sign == '=') 
        {
          break;
        }
        setlocale(0, "rus");
        cout << "Введите число: ";
        cin >> number;
        
        cout << "Введите знак: ";
        cin >> sign; 
    }
    
    cout << "Подсчет: " << count;
}

// ========================================================================== //

// 12. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет больше или равна N, и саму эту сумму.
void task12() 
{
    int N, k = 2, x;
    setlocale(0, "rus");
    cout << "Введите целое число: ";
    cin >> N;
    
    while(x * (x+1) / 2 < N) 
    {
        x = k;
        k++;
    }
    cout << "Найменьшее из целых чисел: " << k << endl;
    cout << "Сумма = " << x * (x+1) / 2;;
}

// ========================================================================== //

// // 13. Разработать программу, которая должна определять заработную плату для каждого работника. Компания выплачивает каждому служащему почасовую зарплату за первые 40
// часов работы и выплачивает в полуторном размере за все рабочие часы сверх 40. Дан список сотрудников, количество часов, отработанных ими, и почасовая ставка каждого
// сотрудника. Программа должна ввести эти данные для каждого сотрудника, распечатать и вывести на экран его суммарную зарплату.
void task13() 
{
    int count, rate, s = 0, i;
    string name;
    setlocale(0, "rus");
    cout << "Имя сотрудника: " << endl;
    cin >> name;
    
    cout << "Количество часов: " << endl;
    cin >> count;
    
    cout << "Ставка ($/hr): " << endl;
    cin >> rate;
    
    for(i = 1; i <= count; i++) 
    {
        if(i > 40) 
        {
            s += ((rate / 2) * 3); 
        } 
        else 
        {
            s += rate;
        }
    }
    
    cout << name << " получает " << s << "$";
}

// ========================= // 
// © Ilya Goncharov, 211701c //
// ========================= //