#include <iostream>
#include "Counter.h"
#include <Windows.h>

void counter_start(Counter* counter);

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input = " "; int input2 = 1; 
    while (true) {
        std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : ";
        std::cin >> input;
        if (input == "да") {
            std::cout << "Введите начальное значение счётчика : ";
            std::cin >> input2;
            Counter counter = { input2 };
            counter_start(& counter);
            break;
        }
        else if (input == "нет") {
            Counter counter;
            counter_start(&counter);
            break;
        }
        else {
            std::cout << "Неверный ввод!\n" << std::endl;
        }
    }
}

void counter_start(Counter* counter) {
        char input = ' ';
        while (true) {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> input;
            if (input == '+') {
                counter->add_value();
            }
            else if (input == '-') {
                counter->sub_value();
            }
            else if (input == '=') {
                counter->balance();
            }
            else if (input == 'x' || input == 'х') {
                std::cout << "До свидания!" << std::endl;
                break;
            }
            else {
                std::cout << "Неверный ввод!\n" << std::endl;
            }
        }
}