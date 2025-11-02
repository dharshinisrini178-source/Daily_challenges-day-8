#include<stdio.h>
int main() {
    int n, digit, count = 0, sum = 0, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) 
        digit = n % 10;
        count++;
        sum += digit;
        product *= digit;
        n /= 10;
    printf("Count of digits = %d\n", count);
    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", product);
}
