#include <stdio.h>
#include <omp.h>

static long num_steps = 100000;
double step;

int main() {
    double start_time = omp_get_wtime();
    double x =0;
    double pi =0;
    double sum =0;

    step = 1.0/(double)num_steps;
    for(int i = 0; i < num_steps; i++) {
        x=(i+0.5)*step;
        pi+=4.0/(1.0+x*x);
    }
    sum = pi*step;
    double time = omp_get_wtime() - start_time;
    printf("%lf \n", sum);
    printf("Took: ");
    printf("%f", time);
    printf(" Sec.");
}