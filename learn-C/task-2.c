/**

task-2.c - Задание 3  - Четность числа

 */

#include <stdio.h>

int main() {
    int a;  // Переменная для хранения введенного числа
    int result;  // Переменная для проверки успешности ввода
    int continue_program = 1;  // Флаг для продолжения работы программы

    printf("Программа для определения четности числа.\n");

    // Основной цикл программы
    while (continue_program == 1) {  
        printf("Введите целое число: ");
        result = scanf("%d", &a);  // Считывание числа

        // Проверка на корректность ввода
        while(result != 1) {
            printf("Ошибка: пожалуйста, введите целое число.\n");
            while(getchar() != '\n');  // Очищаем входной буфер
            printf("Введите целое число: ");
            result = scanf("%d", &a);  // Повторный ввод
        }

        // Проверка на четность числа
        if(a % 2 == 0) {
            printf("Число %d является четным.\n", a);
        } else {
            printf("Число %d является нечетным.\n", a);
        }

        // Запрос на продолжение работы программы
        printf("Если вы хотите продолжить, введите 1, если хотите завершить, введите 0: ");
        scanf("%d", &continue_program);

        while(getchar() != '\n');  // Очищаем входной буфер после ввода
    }

    printf("Программа завершена.\n");
    return 0;  // Завершение программы
}
