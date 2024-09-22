/* 
task-1.c - Задание 1  - Калькулятор(простой)
*/

#include <stdio.h>
#include <stdlib.h>

#define RED "\x1B[31m"    // Определение цвета текста - красный
#define GREEN "\x1B[32m"  // Определение цвета текста - зеленый
#define YELLOW "\x1B[33m" // Определение цвета текста - желтый
#define RESET "\x1B[0m"   // Сброс цвета текста

// Функция сложения двух чисел
int add(int a, int b) {
    return a + b;
}

// Функция вычитания двух чисел
int subtract(int a, int b) {
    return a - b;
}

// Функция умножения двух чисел
int multiply(int a, int b) {
    return a * b;
}

// Функция деления двух чисел с проверкой на деление на ноль
float divide(int a, int b) {
    if (b == 0) {
        printf(RED "Ошибка: деление на ноль!\n" RESET);
        exit(1); // Завершение программы при ошибке
    }
    return (float)a / b; // Приведение к float для точного результата
}

// Функция остатка от деления с проверкой на деление на ноль
int mod(int a, int b) {
    if (b == 0) {
        printf(RED "Ошибка: деление на ноль!\n" RESET);
        exit(1);
    }
    return a % b;
}

// Функция для отображения меню операций
void display_menu() {
    printf(GREEN "\nВыберите операцию:\n" RESET);
    printf(YELLOW "1. Сложение (+)\n" RESET);
    printf(YELLOW "2. Вычитание (-)\n" RESET);
    printf(YELLOW "3. Умножение (*)\n" RESET);
    printf(YELLOW "4. Деление (/)\n" RESET);
    printf(YELLOW "5. Остаток от деления (%%)\n" RESET);
    printf(GREEN "0. Выйти из программы\n" RESET);
}

int main() {
    int choice, num1, num2; // Переменные для выбора операции и чисел
    int running = 1; // Флаг для продолжения работы программы

    while (running) {
        display_menu(); // Отображение меню
        printf(GREEN "\nВведите номер операции: " RESET);
        scanf("%d", &choice); // Ввод выбора операции

        if (choice == 0) {
            printf(GREEN "Выход из программы...\n" RESET);
            break; // Выход из цикла и программы
        }

        // Ввод двух чисел
        printf("Введите первое число: ");
        scanf("%d", &num1);
        printf("Введите второе число: ");
        scanf("%d", &num2);

        // Выбор операции и вывод результата
        switch(choice) {
            case 1:
                printf(GREEN "Результат: %d\n" RESET, add(num1, num2));
                break;
            case 2:
                printf(GREEN "Результат: %d\n" RESET, subtract(num1, num2));
                break;
            case 3:
                printf(GREEN "Результат: %d\n" RESET, multiply(num1, num2));
                break;
            case 4:
                printf(GREEN "Результат: %.2f\n" RESET, divide(num1, num2));
                break;
            case 5:
                printf(GREEN "Результат: %d\n" RESET, mod(num1, num2));
                break;
            default:
                printf(RED "Ошибка: неверный ввод!\n" RESET); // Обработка неверного выбора
                break;
        }

        // Запрос на продолжение работы
        printf(GREEN "\nХотите продолжить? (1 - да, 0 - нет): " RESET);
        scanf("%d", &running);
    }

    return 0; // Завершение программы
}
