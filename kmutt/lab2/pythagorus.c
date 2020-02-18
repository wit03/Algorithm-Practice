#include <stdio.h>
#include <math.h>
int main() {
    double a, b, result;
    scanf("%lf%lf", &a, &b);
    result = sqrt(pow(a, 2) + pow(b, 2));
    printf("%lf\n", result);
    return 0;
}