#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, base;
    unsigned char minus = 0;
    unsigned int digits[64];
    int count;
    scanf ( "%d", &num);
    scanf ( "%d", &base);
    if (num < 0) {
        num = -num;
        minus = 1;
    }
    for (count = 0; num != 0; count++) {
        digits[count] = num % base;
        num /= base;
    }
    if (minus) {
        printf("- ");
    }
    int iter = count - 1;
    while (iter >= 0) {
        printf("%d ", digits[iter]);
        iter--;
    } return 0;
}
