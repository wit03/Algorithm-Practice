#include <stdio.h>

int main() {
    int x,y,sum; 
    scanf("%d%d",&x,&y);
    if(x>y) {
        sum = 2;
    }
    else {
        sum = (y / x) + ((y % x) != 0); 
    }
    printf("%d", sum);
    return 0;
}