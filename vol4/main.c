#include <stdio.h>

/* プロトタイプ宣言 */
int sum(int,int);

void main(void) {
    sum(1, 2);
}

int sum(int a, int b){
    return a+b;
}