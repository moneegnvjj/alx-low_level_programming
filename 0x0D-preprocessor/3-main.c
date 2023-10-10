#include <stdio.h>
#include "3-function_like_macro.h"

int main(void) {
    int a = -98;
    int result1 = ABS(a) * 10;
    int result2 = ABS(-a) * 10;

    printf("%d, %d\n", result1, result2);

    return 0;
}

