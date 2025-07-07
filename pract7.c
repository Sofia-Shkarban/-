#include <stdio.h>
#include <math.h>
int main() {
    int x1, y1, r1, x2, y2, r2;
    double d;
    printf("Введіть координати центрів і радіуси двох кіл: x1 y1 r1 x2 y2 r2: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    d =sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    int r_sum =r1+r2;
    int r_diff =abs(r1-r2);
    if (x1==x2 && y1==y2 && r1==r2) {
        printf("-1\n");
    } else if (d>r_sum || d<r_diff) {
        printf("0\n");
    } else if (fabs(d-r_sum)< 1e-6 || fabs(d-r_diff)< 1e-6) {
        printf("1\n");
    } else {
        printf("2\n");
    }
    return 0;
}
