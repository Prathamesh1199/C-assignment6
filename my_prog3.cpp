#include <stdio.h>

int main() {
    int num, i, product;

    printf("Enter a number: 5 ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", 5 );
    for(i = 1; i <= 10; i++) {
        product = num * i;
        printf("%d x %d = %d\n", num, i, product);
    }

    return 0;
}


