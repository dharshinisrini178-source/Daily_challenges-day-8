#include<stdio.h>
int main() {
    int n, last, next, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    n /= 10;
    while (n != 0) {
        next = n % 10;
        if (next > last) {
            flag = 0;
            break;
        }
        last = next;
        n /= 10;
    }
    if (flag)
        printf("Digits are in ascending order.\n");
    else
        printf("Digits are not in ascending order.\n");
}
