//not finished
#include <stdio.h>

int main() {
    int s, n; //s = segment and n = total words
    int count = 0;
    scanf("%d", &s); 
    scanf("%d", &n);
    char str[s+1][n];
    for(int i = 0; i < n; i++) {
        scanf("%s[^\n]", str[i]);
    }

    for(int i = 0;  i < n; i++) {
        printf("%d", str[i]);
    }
    return 0;
}