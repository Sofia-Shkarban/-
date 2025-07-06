#include <stdio.h>
int main() {
    double t1, t2, t3;
    printf("Введіть три значення: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    if (t1==0 || t2==0 || t3==0) {
        printf("Час не може дорівнювати нулю!\n");
        return 1;
    }
    double speed =(1.0/t1) +(1.0/t2) +(1.0/t3);
    double time =1.0/speed;
    printf("Час необхідний для з'їдання пирога: %.2lf годин\n", time);
    return 0;
}
