#include <stdio.h>

int main() {

    int x,y;

    printf("Please provide any two numbers");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x>y) {
            printf("The greater number of the two given numbers is %d \n", x);
    } else {
     printf("The greater number of the two given numbers is %d \n", y);   
    }

    return 0;
}
