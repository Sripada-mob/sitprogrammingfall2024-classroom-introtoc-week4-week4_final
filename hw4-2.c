#include <stdio.h>

int main() {

    int x;

    printf("Please input any number:");
    scanf("%d", &x);

    if(x>0) {
            printf("The number is positive.\n");
    } else {
            printf("The number is negative or zero. \n");
    }

    return 0;
}
