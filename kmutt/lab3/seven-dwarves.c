#include <stdio.h>

int main() {
    int in[9];
    int sum = 0, diff = 0, x = 0;
    for(int i = 0; i<9; i++) {
        scanf("%d", &in[i]);
        sum += in[i];
    }
    diff = sum - 100;
    
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 9; j++) {
            if(in[i] + in[j] == diff) {
                in[i] = 0;
                in[j] = 0;
                break;
            }
        }
    }   
    for(int i = 0; i < 9; i++) {
        if(in[i] != 0) {
            printf("%d \n", in[i]);
        }
    }
    return 0;
}