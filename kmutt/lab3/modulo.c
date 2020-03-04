#include <stdio.h>

int main() {
    int n, count = 0;
    int mod[42] = {0};

    for(int i = 0; i<10; i++) {
        scanf("%d", &n);
        if(mod[n%42] == 0) {
            mod[n%42] = 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}