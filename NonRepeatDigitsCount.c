#include<stdio.h>
int nonRepeatDigitsCount(int input1) {
    int c = 0, r, i;
    int h[10] = {0};
    while(input1 > 0) {
        r = input1 % 10;
        h[r]++;
        input1 = input1 / 10;
    }
    for(i = 0; i < 10; i++) {
        if(h[i] == 1) {
            c++;
        }
    }
    return c;
}
//Main Function

int main() {
    int input1;
    printf("Enter an integer: ");
    scanf("%d", &input1);
    int result = nonRepeatDigitsCount(input1);
    printf("Number of non-repeating digits: %d\n", result);
    return 0;
}