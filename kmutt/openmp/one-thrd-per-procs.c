#include <stdio.h>
#include <omp.h>

int main() {
    int num_threads;
    omp_set_dynamic(0); //turn off set omp_set_dynamic
    omp_set_num_threads( omp_get_num_procs() ); //set num of threads equal to num of omp_get_num_procs
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        #pragma omp single //want one thread to do this but dont care which thread gonna do this
            num_threads = omp_get_num_threads(); //if you ask the number of thread outside the parallel region. only result you will get is 1
            printf("%d \n", num_threads);
    }
}