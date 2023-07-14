#include <stdio.h>
int countPrimesInRange(int input1, int input2) {
    int k = 2;
    int d = input1;
    int i, c = 0;
    int p = 0;
    int cou = 0;
    while (d <= input2) {
        for (i = 2; i < d; i++) {
            if (d % i == 0) {
                c++;
            }
        }
        if (c == 0) {
            cou++;
            printf("%d\n", d);
        }
        d++;
        c = 0;
    }
    return cou;
}
int main() {
    int input1, input2;
    printf("Enter input1: ");
    scanf("%d", &input1);
    printf("Enter input2: ");
    scanf("%d", &input2);
    int result = countPrimesInRange(input1, input2);
    printf("Count of Primes: %d\n", result);
    return 0;
}
