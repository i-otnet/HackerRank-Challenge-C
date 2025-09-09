#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // input two integers
    printf("%d %d\n", a + b, a - b); // output their sum and difference

    float x, y;
    scanf("%f %f", &x, &y); // input two floating-point numbers
    printf("%.1f %.1f\n", x + y, x - y); // output their sum and difference

    return 0;
}