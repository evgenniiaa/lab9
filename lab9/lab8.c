#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void zadanie1(void)
{
    int ROW = 9, COL = 9;
    int row, col;
    printf("\n 1.1) Полная таблица Пифагора\n");
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= COL; ++col) {
            printf("%5d", col * row);
        }
        printf("\n");
    }
}

void zadanie1_2(void)
{
    int N = 9;
    int row, col;
    printf("\n 1.2)Левый нижний треугольник таблицы Пифагора\n");
    for (row = 1; row <= N; ++row) {
        for (col = 1; col <= row; ++col) {
            printf("%5d", col * row);
        }
        printf("\n");
    }
}

void zadanie1_3(void)
{
    int n = 5;
    int i, j;
    printf("\n 1.3)Вариант 4\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("5 ");
        }
        printf("\n");
    }
}

void zadanie2(void)
{
    long long number;
    char choice;

    printf("\n 2) Вариант 4\n");

    do {
        printf("Введите число: ");
        scanf("%lld", &number);

        long long temp = number;
        int count = 0;
        if (temp < 0) temp = -temp;
        while (temp > 0) {
            int digit = (int)(temp % 10);
            if (digit > 5) count++;
            temp /= 10;
        }

        printf("Количество цифр больше 5: %d\n", count);

        while (getchar() != '\n');
        printf("Продолжить? (Да - 'y'/'д', Нет - 'n'/'н'): ");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y' || choice == 'д' || choice == 'Д');
}

void zadanie3(void)
{
    char symbol;
    int height;
    int choice;

    printf("\n 3) Вариант 4 \n");

    do {
        printf("Введите символ, из которого будет строиться фигура: ");
        scanf(" %c", &symbol);

        printf("Введите высоту (размер) фигуры: ");
        scanf("%d", &height);

        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%c", symbol);
            }
            printf("\n");
        }

        printf("\nПродолжить? (Да - любое число, Нет - 0): ");
        scanf("%d", &choice);
    } while (choice != 0);
}

int main(void)
{
    setlocale(LC_ALL, "RUS");

    zadanie1();
    zadanie1_2();
    zadanie1_3();
    zadanie2();
    zadanie3();

    return 0;

    return 0;
}