// Пользователь вводит любое целое число. Необходимо из
// этого целого числа удалить все цифры3 и 6 и вывести обратно
// на экран.

#include <iostream>
#include <windows.h>
using namespace std;

/// <summary>
/// Метод убирает указанные цифры из числа
/// </summary>
/// <param name="digit1">Первая цифра</param>
/// <param name="digit2">Вторая цифра</param>
/// <param name="userInput">Число введённое пользователем</param>
/// <returns>Число без указанных цифр</returns>
int RemoveDigit(int digit1, int digit2, long int userInput) 
{
    long int result = 0;
    int temp = 1;

    while (userInput > 0)
    {
        int curDigit = userInput % 10;

        if (curDigit != digit1 && curDigit != digit2) 
        {
            result = curDigit * temp + result;
            temp *= 10;
        }

        userInput /= 10;
    }
    return result;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long int userInput = 0;
    int digit3 = 3;
    int digit6 = 6;

    cout << "Введи число, удалю из него цифры 3 и 6 : ";
    cin >> userInput;

    cout << " Вот что получилось : " << RemoveDigit(digit3, digit6, userInput);
}

