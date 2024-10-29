#include <stdio.h>

int main() {

    int x,y,z;

    printf("Please provide any three numbers.\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x > y) {
            if(x > z) {
                    printf("%d is the largest number\n", x);
            } else {    
                    printf("%d is the largest number\n", z);
                    }
    }else if(y > z) {
            printf("%d is the largest numuber\n", y);
    }else {
            printf("%d is the largest numuber\n", z);
    }

    return 0;
}
