#include <stdio.h>

int main() {
    int n, width, middle, count;
    scanf("%d", &n);
    width = (n%2 ? n : n -1);
    middle = (width%2 ? width/2 : (width+1)/2);
    count = n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<width; j++){
            if((i == 0 || i == n-1) && j == middle) {
                printf("*");
            }
            else if (j == middle + i || j == middle - i) {
                printf("*");
            }
            else if(j == middle + (count-1) ||j == middle - (count-1))
            {
                printf("*");
            }
            
            else
            {
                printf("-");
            }
        }
        count--;
        printf("\n");
    }
}