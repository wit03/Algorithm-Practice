#include <stdio.h>

int main() {
    char str[10001];
    int capital = 0, small = 0;
    scanf("%s", str);
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            capital = 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small = 1;
        }
    }
    if(small && capital) {
            printf("Mix");
    }
    else if(small) {
            printf("All Small Letter");
    }
    else {
            printf("All Capital Letter");
    }
    return 0;
}