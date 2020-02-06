#include <stdio.h>
#include <omp.h>
#define NUM_THREAD 2


static long num_steps = 100000;
double step;

int main() {
    double start_time = omp_get_wtime();
    int i, GlobalNumofThread;
    double pi = 0, sum[NUM_THREAD]; //init sum elements equal to threads num
    step = 1.0/(double)num_steps;
    
    omp_set_num_threads(NUM_THREAD);
    
    #pragma omp parallel
    {
        int i;
        double x;
        int id = omp_get_thread_num();
        int numoftred = omp_get_num_threads();
        GlobalNumofThread = numoftred; //assign global variable val equal to local one
        for(i = id, sum[id]=0; i < num_steps; i=i+numoftred) { 
            //init i = id which is depends on how many thread init at first, init sum of each id = 0 at first, 
            //using i = i+numoftred the process will look like:
            //thread1: (0) 2 4 6 8 ...
            //thread2: (1) 3 5 7 9 ...
            //ps. in parentess = id of each thread from init
            x=(i+0.5)*step;
            sum[id]+=4.0/(1.0+x*x);
        }
    }

    //plus all sum in array using forloop
    for(i=0; i<GlobalNumofThread; i++) {
        pi += sum[i] * step;
    }
    double time = omp_get_wtime() - start_time;
    printf("%f \n", pi);
    printf("Took: ");
    printf("%f", time);
    printf(" Sec.");
    

}