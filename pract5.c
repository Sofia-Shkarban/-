#include <stdio.h>
#define MOD 12345
int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);
    int dp[n+1][3];
    dp[1][0]=1; 
    dp[1][1]=1; 
    dp[1][2]=0; 
    for (int i=2; i<=n; i++) {
        dp[i][0] =(dp[i-1][0]+dp[i-1][1]+dp[i-1][2]) %MOD; 
        dp[i][1] =dp[i-1][0];                 
        dp[i][2] =dp[i-1][1];
    }
    int result =(dp[n][0]+dp[n][1]+dp[n][2]) %MOD;
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
