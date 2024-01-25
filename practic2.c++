#include <iostream>
#include <cmath>
using namespace std;

int main() 

{ 
    setlocale(LC_ALL,"Russian");
    int a;
    std::cout <<"введите номер операции:/n1.Сложение/n2.Вычитание/n3.Частное/n4.Произвдение/n5.Возведение в степень/n6.Нахождения квадратного корня/n7.Нахождение 1 процента от числа/n8.Найти факториал числа/n9.Выйти из программы.";
    std::cin >> a;
    switch (a)
    {
        case 1:
            double x = 0;
            double y = 0;

            std::cout <<"введите 2 числа: ";
            std::cin >> x >> y;
            std::cout << x+y;
            break;

        case 2:
            double x = 0;
            double y = 0;

            std::cout <<"введите 2 числа: ";
            std::cin >> x >> y;
            std::cout <<x-y;
            break;

        case 3:
            double x = 0;
            double y = 0;

            std::cout <<"введите 2 числа: ";
            std::cin >> x >> y;
            if (y == 0) 
            {
                std::cout <<"на ноль делить нельзя!"; 
                break;
            }
            std::cout <<x/y;
            break;

        case 4:
            double x = 0;
            double y = 0;

            std::cout <<"введите 2 числа: ";
            std::cin >> x >> y;
            std::cout <<x*y;
            break;

        case 5:
            double x = 0;
            double y = 0;
            std::cout <<"введите 2 числа: ";
            std::cin >> x >> y;
            std::cout <<pow(x,y);
            break;

        case 6:
            double x = 0;
            std::cout <<"введите число: ";
            std::cin >> x;
            if (x <= 0)
            {
                std::cout <<"Неверная операция!";
                break;
            }
            std::cout << sqrt(x);
            break;

        case 7:
            int x = 0;
            std::cout <<"введите число: ";
            std::cin >> x;
            std::cout << x*0.01;
            break;

        case 8:
            int x = 0;
            int i;
            int y;

            std::cout <<"введите число: ";
            std::cin >> x;

            y = 1;
            for (i = 1; i <= x; i++) 
            {y = y * i;}
            std::cout << y;
            break;

        case 9:
            std::cout <<"До свидания!";
            break;
    }
}   