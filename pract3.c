#include <stdio.h>
int main() {
    int p;
    printf("Введіть кількість розрядів (p ≤ 30): ");
    scanf("%d", &p);
    if (p < 1 || p > 30) {
        printf("Некоректне значення p!\n");
        return 1;
    }
    long long dp[31][4] = {0};
    dp[1][0] = 1; 
    dp[1][2] = 1; 
    for (int i = 2; i <= p; ++i) {
        dp[i][0] = dp[i-1][2] + dp[i-1][3]; 
        dp[i][1] = dp[i-1][0];             
        dp[i][2] = dp[i-1][0] + dp[i-1][1];
        dp[i][3] = dp[i-1][2];             
    }
    long long total = dp[p][0] + dp[p][1] + dp[p][2] + dp[p][3];
    printf("Кількість допустимих %d-розрядних чисел: %lld\n", p, total);

    return 0;
}
