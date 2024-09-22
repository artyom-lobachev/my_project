#include <stdio.h>

int main() {
    int a, b;
    printf("Введите первое целое число: ");
    scanf("%d", &a);
    printf("Введите второе целое число: ");
    scanf("%d", &b);
    printf("Числа: %d, %d\n", a, b);
	printf("Сумма: %d\n", a + b);
    return 0;
}
