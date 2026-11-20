
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    // Оголошення змінних
    double x, y;

    // Введення значення x
    printf("Enter x: ");
    scanf("%lf", &x);

    // Перевірка першого проміжку
    if (x >= -12 && x < -8)
        y = pow(2, fabs(x) + 1);

    // Перевірка другого проміжку
    else if (x >= -3 && x < 3)
        y = (cos(x) + x) / (sin(x) + 1);

    // Перевірка третього проміжку
    else if (x >= 10 && x < 200)
        y = 4 * x + sqrt(pow(x, 3) - 2 * x);

    // Для всіх інших значень x
    else
        y = 1.0 / 125.0;

    // Очищення консолі
    system("cls");

    // Виведення результату
    printf("x = %lf", x);
    printf("\ny = %lf", y);

    return 0;
}
