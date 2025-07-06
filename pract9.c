#include <stdio.h>
int min_steps(int x, int y) {
    if (y <= x) return 0;
    int dist = y - x;
    int step = 1;
    int total = 0;
    int used = 0;
    while (total < dist) {
        used++;
        total += step;
        if (used % 2 == 0) {
            step++;
        }
    }
    return used;
}
int main() {
    int x, y;
    printf("Введіть значення x та y: ");
    scanf("%d %d", &x, &y);
    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}
