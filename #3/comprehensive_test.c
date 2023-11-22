#include <stdio.h>

int main() {
    // 1から25までの処理
    printf("for文による処理");
    for (int i = 1; i <= 25; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    // 26から50までの処理
    printf("while文による処理");
    int z = 26;
    while (z <= 50) {
        if (z % 3 == 0) {
            printf("%d\n", z);
        }
        z++; 
    }
    return 0;
}