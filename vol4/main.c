#include <stdio.h>

char return_a(void);

int main(void) {

    printf("%c", return_a());    
    return 0;
}

char return_a(){
    return 'a';
}