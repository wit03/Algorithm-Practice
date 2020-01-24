#include <stdio.h>

int main() {
    int n = 0;
    int sum = 1, oldSum = 1, oldFuckinSum = 1;
    scanf("%d", &n);
     
    for(int i=0; i < n; i++) {
        oldFuckinSum = oldSum;
        oldSum = sum;
        sum = oldSum + oldFuckinSum;
        
        printf("%d \n", oldFuckinSum);
        

        
        
    }

    
    
    return 0;
}