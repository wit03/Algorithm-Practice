#include <stdio.h>

int main() { 
    int x, y, z; 
    scanf("%d%d%d", &x, &y, &z);
    if(z-y-1 >= y-x-1) printf("%d", z-y-1);
    else printf("%d", y-x-1);
    return 0;
}