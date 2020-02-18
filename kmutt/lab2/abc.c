#include <stdio.h>
#include <string.h>

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main() {
    int in[3];
    char str[3];
    int i,j, min_idx;

    scanf("%d%d%d", &in[0], &in[1], &in[2]);
    scanf("%s", str);

    for(i = 0; i<2; i++) {
        min_idx = i; 
        for (j = i + 1; j < 3; j++) {
            if (in[j] < in[min_idx]) {
                min_idx = j; 
            }
        }
        swap(&in[min_idx], &in[i]);
    }

    for (i = 0; i < 3; i++) {
         if(str[i] == 'A') {
             printf("%d", in[0]);
         }
         if(str[i] == 'B') {
             printf("%d", in[1]);
         }
         if(str[i] == 'C') {
             printf("%d", in[2]);
        }
        printf(" ");
    }
         
    return 0;
}