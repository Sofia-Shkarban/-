#include <stdio.h>
int lcm(int a, int b) {
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return a * b / x; 
}
int main() {
    int p;
    printf("Введіть кількість чисел (1-20): ");
    scanf("%d", &p);
    if (p < 1 || p > 20) {
        printf("Неправильна кількість чисел\n");
        return 1;
    }
    int numbers[20];
    printf("Введіть числа: ");
    for (int i = 0; i < p; ++i) {
        scanf("%d", &numbers[i]);
        if (numbers[i] <= 0) {
            printf("Числа мають бути додатні!\n");
            return 1;
        }
    }
    int result = numbers[0];
    for (int i = 1; i < p; ++i) {
        result = lcm(result, numbers[i]);
    }
    printf("НСК: %d\n", result);
    return 0;
}
