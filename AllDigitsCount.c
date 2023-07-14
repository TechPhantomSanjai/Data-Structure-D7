#include <stdio.h>
int allDigitsCount(int input1) {
    int c = 0, r;
    while (input1 > 0) {
        r = input1 % 10;
        c++;
        input1 = input1 / 10;
    }
    return c;
}
int main() {
    int input1;
    printf("Enter input1: ");
    scanf("%d", &input1);
    int result = allDigitsCount(input1);
    printf("Number of Digits: %d\n", result);
    return 0;
}
