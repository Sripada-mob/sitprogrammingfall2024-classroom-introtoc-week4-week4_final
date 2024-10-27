#include <stdio.h>

int main() {

    int x;

    printf("Please input any number:");
    scanf("%d", &x);

    if(x > 0) {
            printf("%d is a positive number.\n", x);
    } else if(x < 0) {
            printf("%d is a negative number. \n", x);
    } else {
            printf("You entered %d\n", x);
    }

    return 0;
}
