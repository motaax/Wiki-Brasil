#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        printf("%d\n", i);
    }
        
    for (int i = 1; i < 20; i++) {
        printf("%d, ", i);
    }
        
    printf("20");

    return 0;
}